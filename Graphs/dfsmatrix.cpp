#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
void dfs(int** adj,bool visited[],int s,int n){
	visited[s]=1;
	cout << s << " ";
	for(int i=0; i<n; i++){
		if(adj[s][i] && !visited[i])
			dfs(adj,visited,i,n);
	}
}
int main(){
	int n,e; 
	cin >>n>>e;
	int **adj=new int*[n];
	for(int i=0; i<n; i++){
		adj[i]=new int[n];
		for(int j=0; j<n; j++)
			adj[i][j]=0;
	}
	for(int i=0; i<e; i++){
		int f,s;
		cin >> f >> s;
		adj[f][s]=1;
		adj[s][f]=1;
	}
	bool visited[n]={false};
	dfs(adj,visited,0,n);
}