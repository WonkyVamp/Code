#include <iostream>
#include <vector>
#include <queue>
#define N 10000
#include <bits/stdc++.h>
using namespace std;
vector<int> ans;
int minDistance(bool v[],vector<int>d,int V){
	int min = INT_MAX,k;
	for(int j=0; j<V; j++){
		if(v[j]==false && d[j]<min){
			min =d[j];
			k=j;
		}
	}
	return k;
}
vector<int> djikstra(vector<vector<int>>graph,int source, int V){
	bool visited[V];
	memset(visited,false,sizeof(visited));
	vector<int> distance(V);
	for(int i=0; i<V; i++){
		distance[i]=INT_MAX;
	}
	distance[source]=0;
	for(int i=0; i<V-1; i++){
		int u= minDistance(visited,distance,V);
		visited[u]=true;
		for( int v=0; v<V; v++){
			if(!visited[v] && graph[u][v] && distance[u] !=INT_MAX && graph[u][v] + distance[u] < distance[v]){
				distance[v]=graph[u][v] + distance[u];
			}
		}
	}
	return distance;
}
int main(){
	int V,source;
	cin >> V >> source;
	int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } }; 
    djikstra(graph,source,V);
}