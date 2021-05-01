#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
bool safe(vector<int> A[], int M, int N, int row, int col, vector< vector<bool> > &visited){
	if(row>=0 && row<M && col>=0 && col<N && A[row][col]==1 && !visited[row][col])
		return true;
	return false;
}
void dfs(vector<int> A[],vector<vector<bool>> &visited,int row,int col, int N, int M){
	visited[row][col]=true;
	static int x[]={-1,-1,-1,0,0,1,1,1};
	static int y[]={-1,0,1,-1,1,-1,0,1};
	for(int k=0; k<8; k++){
		if(safe(A,M,N,row+x[k],col+y[k],visited))
			dfs(A,visited,row+x[k],col+y[k],N,M);
	}
}
int findIslands(vector<int> A[], int N, int M) {
	vector< vector<bool> > visited(N,vector<bool>(M,false));
	int ctr=0;
	for(int i=0; i<M; i++){
		for(int j=0; j<N; j++)
			if(A[i][j]==1 && !visited[i][j]){
				dfs(A, visited,i,j,N,M);
				ctr++;
			}
	}
	return ctr;
}
int main(){
	int n,m,e; 
	cin >>n>>m>>e;
	int **adj=new int*[m];
	for(int i=0; i<n; i++){
		adj[i]=new int[m];
		for(int j=0; j<m; j++)
			adj[i][j]=0;
	}
	for(int i=0; i<e; i++){
		int f,s;
		cin >> f >> s;
		adj[f][s]=1;
		adj[s][f]=1;
	}
	cout << findIslands(adj,n,m);
}