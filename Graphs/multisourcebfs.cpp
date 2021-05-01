#include <iostream>
#include <vector>
#include <queue>
#define N 10000
using namespace std;
bool visited[N];
int distance[N];
void addEdge(vector<int> graph[],int u,int v){
	graph[u].push_back(v);
	graph[v].push_back(u);
}
void bfs(vector<int>graph, queue<int>q){
	while(!q.empty()){
		int k = q.front();
		q.pop();
		for(auto itr:graph[k]){
			if(!visited[itr]){
				q.push(itr);
				distance[itr]=distance[k]+1;
				visited[itr]=true;
			}
		}
	}
}
void nearestTown(vector<int> graph[],int sources[],int n,int s){
	queue<int>q;
	for(int i=0; i<s; i++){
		q.push(sources[i]);
		visited[sources[i]]=true;
	}
	bfs(graph,q);
	for( int i=1; i<=n; i++ ){
		cout << i << " " << distance[i] << endl;
	}
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
	int sources[]={1,5};
	int s = sizeof(sources)/sizeof(sources[0]);
	nearestTown(graph,sources,n,s);
}