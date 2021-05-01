#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
vector <int> bfs(vector<int> g[], int N) {
	vector <bool> visited(N,false);
	vector <int> ans;
	queue <int> q;
	q.push(0);
	visited[0]=true;
	while(!q.empty()){
		int f = q.front();
		ans.push_back(f);
		q.pop();
		for(auto itr : g[f]){
			if(!visited[itr]){
				visited[itr]=true;
				q.push(itr);
			}
		}
	}
  return ans;  
}
int main(){
	int n,e;
	cin >> n >> e;
	vector<int> adj[n];
	for(int i=0; i<e; i++){
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vector<int> x=bfs(adj,n);
}