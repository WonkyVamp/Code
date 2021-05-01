#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> graph[],int u,int v){
	graph[u].push_back(v);
	graph[v].push_back(u);
}
bool solve(vector<int> g[], vector<bool> vis, int s,int prev) {
	vis[s]=true;
	for(auto it : g[s]){
		if(!vis[it]){
			if(solve(g,vis,it,s))
				return 1;
		}
		else if(it != prev)
			return 1;
	}
	return 0;
}
bool isCyclic(vector<int> g[], int V)
{
	vector <bool> visited(V,false);
	for(int i=0; i<V; i++){
		if(!visited[i] && solve(g,visited,i,-1))
			return 1;
	} 
	return 0;
}
int main(){
	int n,e;
	cin >> n>>e;
	vector<int> graph[n+1];
	for( int i=0; i<e; i++){
		int u,v;
		cin >> u >>v;
		addEdge(graph,u,v);
	}
	cout << isCyclic(graph,n);
}