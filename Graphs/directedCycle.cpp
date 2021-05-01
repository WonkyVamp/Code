#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> graph[],int u,int v){
	graph[u].push_back(v);
}
bool solve(vector<int> g[], bool vis[], int s, bool recStack[]) {
	vis[s]=true;
	recStack[s]=true;
	for(auto it : g[s]){
		if(!vis[it]){
			if(solve(g,vis,it,recStack))
				return 1;
		}
		else if(recStack[it])
			return true;
	}
	recStack[s]=false;
	return 0;
}
bool isCyclic(int V, vector<int> g[])
{
	bool visited[V]={false};
	bool recStack[V]={false};
	for(int i=0; i<V; i++){
		if(!visited[i] && solve(g,visited,i,recStack))
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