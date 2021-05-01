#include <bits/stdc++.h>
using namespace std;
vector<int> topoSort(int v, vector<int> adj[]){
	queue<int>q;
	std::vector<int> ans;
	vector<int>indegree(v,0);
	for(int i=0; i<v; i++){
		for(auto itr : adj[i])
			indegree[itr]++;
	}
	for(int i=0; i<v; i++){
		if(indegree[i]==0)
			q.push(i);
	}
	while(!q.empty()){
		int x=q.front();
		q.pop();
		ans.push_back(x);
		for(auto i : adj[x]){
			indegree[i]--;
			if(indegree[i]==0)
				q.push(i);
		}
	}
	return ans;
} 
int main(){
	int t;
	cin >> t;
	for(int z=0; z<t; z++){
		int n,e;
		cin >> n >> e;
		vector<int> adj[n];
		for(int i=0; i<e; i++){
			int u,v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		vector<int>x=topoSort(n,adj);
	}
}