#include <bits/stdc++.h>
using namespace std;
string topoSort(int v, vector<char> adj[]){
	queue<char>q;
	string s;
	vector<int>indegree(v,0);
	for(int i=0; i<v; i++){
		for(auto itr : adj[i])
			indegree[itr]++;
	}
	for(char i='a'; i<v; i++){
		if(indegree[i]==0)
			q.push(i);
	}
	while(!q.empty()){
		char x=q.front();
		q.pop();
		s.append(x);
		for(auto i : adj[x]){
			indegree[i]--;
			if(indegree[i]==0)
				q.push(i);
		}
	}
	return ans;
} 
string findOrder(string dict[],int N, int K){
	for(int i=0; i<N-1; i++){
		for(int j=0; j<K; j++){
			if(dict[i][j]==dict[i+1][j])
				continue;
			else{
				adj[dict[i][j]].push_back(dict[i+1][j]);
				indegree[]
				break;
			}
		}
	}
	string s=topoSort(n,adj);
	return s;
} 
int main(){
	int t;
	cin >> t;
	for(int z=0; z<t; z++){
		int n,e;
		cin >> n >> e;
		vector<char> adj[n];
		for(int i=0; i<e; i++){
			int u,v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		vector<int>x=topoSort(n,adj);
	}
}