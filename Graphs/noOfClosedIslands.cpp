#include <bits/stdc++.h>
using namespace std;


bool safe(vector<vector<int>> &A, int M, int N, int row, int col, vector< vector<bool> > &visited){
	if(row>=0 && row<N && col>=0 && col<M && A[row][col]==0 && !visited[row][col])
		return true;
	return false;
}
void dfs(vector<vector<int>> &A,vector<vector<bool>> &visited,int row,int col, int N, int M){
	visited[row][col]=true;
	static int x[]={-1,0,0,1};
	static int y[]={0,-1,1,0};
	for(int k=0; k<4; k++){
		if(safe(A,M,N,row+x[k],col+y[k],visited))
			dfs(A,visited,row+x[k],col+y[k],N,M);
	}
}
int closedIslands(vector<vector<int>> &A) {
	int N = A.size();
	int M = A[0].size();
	//cout << N << M;
	vector< vector<bool> > visited(N,vector<bool>(M,false));
	int ctr=0;
	for(int i=0; i<N; i++){
		if(!visited[0][i] && A[0][i]==0)
			dfs(A, visited,0,i,N,M);
		if(!visited[N-1][i] && A[N-1][i]==0)
			dfs(A, visited,N-1,i,N,M);
	}
	for(int i=0; i<M; i++){
		if(!visited[i][0] && A[i][0]==0)
			dfs(A, visited,i,0,N,M);
		if(!visited[i][M-1] && A[i][M-1]==0)
			dfs(A, visited,i,M-1,N,M);
	}
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++)
			if(A[i][j]==0 && !visited[i][j]){
				dfs(A, visited,i,j,N,M);
				ctr++;
			}
	}
	return ctr;
}

main(){
   vector<vector<int>> v =
  {{0,0,1,1,0,1,0,0,1,0},{1,1,0,1,1,0,1,1,1,0},{1,0,1,1,1,0,0,1,1,0},{0,1,1,0,0,0,0,1,0,1},{0,0,0,0,0,0,1,1,1,0},{0,1,0,1,0,1,0,1,1,1},{1,0,1,0,1,1,0,0,0,1},{1,1,1,1,1,1,0,0,0,0},{1,1,1,0,0,1,0,1,0,1},{1,1,1,0,1,1,0,1,1,0}};
   //cout << "ohh";
   int y=closedIslands(v);
   cout << y;
}