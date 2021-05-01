#include <bits/stdc++.h>
using namespace std;
void dijkstra(vector<pair<int,int>>adj[],int V,int source){
	vector<bool>visited(V,false);
	vector<int>distance(V,INT_MAX);
	distance[source]=0;
	multiset<pair<int,int>>p;
	p.insert({0,source});
	while(!p.empty()){
		pair<int,int>x=*p.begin();
		if(visited[x.second])
			continue;
		visited[x.second]=true;
		for(auto it : adj[x.second]){
			int newDis = distance[x.second]+it.second;
			int currDis = distance[it.first];
			if (newDis<currDis){
				distance[it.first]=newDis;
				p.insert({newDis,it.first});
			}
		}
	}
	for(int i=0; i<V; i++){
		cout << distance[i]<<" ";
	}
}
int main(){
	int V,E;
	cin >> V >> E;
	vector<pair<int,int>>adj[V];
	for(int i=0; i<E; i++){
		int u,v,w;
		adj[u].push_back({v,w});
		adj[v].push_back({u,w});
	}
	dijkstra(adj,V,0);
}