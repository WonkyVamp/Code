#include <bits/stdc++.h>
using namespace std;
int n,e;
void dfs(vector<int> *adj,vector<bool> visited,stack<int>&s,int p){
	visited[p]=true;
	int i;
   for(i=0;i<adj[p].size();i++){
    if(visited[adj[p][i]]==false)
       dfs(adj,visited,s,adj[p][i]);
	}
	cout << p;
	s.push(p);
}
vector<int> topoSort(int n, vector<int> adj[]) {
	vector<int> ans;
    vector<bool> visited(n+1,false);
    stack<int>s;
	for(int i=0; i<n; i++){
		if(!visited[i])
			dfs(adj,visited,s,i);
	}
	int k=0;
	while(!s.empty()&&k<n){
		ans.push_back(s.top());
		k++;
		s.pop();
	}
	return ans;
}
// stack<int>s;
// void help(vector<int> adj[],bool vis[],int p)
// {
//     vis[p]=true;
//     int i;
//     for(i=0;i<adj[p].size();i++)
//     if(vis[adj[p][i]]==false)
//        help(adj,vis,adj[p][i]);
//    	cout << p;
//        s.push(p);
// }
// vector<int> topoSort(int v, vector<int> adj[]) 
// {
   
//       bool vis[v+1];
//       memset(vis,0,sizeof(vis));
//       int i;
//       for(i=0;i<v;i++)
//      if(vis[i]==false)
//      {
//          help(adj,vis,i);
//      }
//      vector<int>ans;
//      while(!s.empty())
//      {
//        //  cout<<s.top()<<" ";
//          ans.push_back(s.top());
//          s.pop();
//      }
//     // cout<<endl;
//      return ans;
// }

int main(){
	int t;
	cin >> t;
	for(int z=0; z<t; z++){
		cin >> n >> e;
		vector<int> adj[n];
		for(int i=0; i<e; i++){
			int u,v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		vector<int>x=topoSort(n,adj);
		// for(int i=0; i<x.size(); i++)
		// 	cout << x[i];
	}
}