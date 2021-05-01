#include <bits/stdc++.h>
using namespace std;
int ctr=0;
int x1[]={-1,-1,-1,0,0,1,1,1};
int y1[]={-1,0,1,-1,1,0,-1,1};
bool isSafe(int M,int N,int row, int col){
	return(row>=0 && row<N && col>=0 && col<M);
}
void dfs(string adj[], string word, int y,int row,int col,stepx,stepy){
	int len = word.length();
	if(y==len){
		ctr++;
		return;
	}
	int	row1=row+stepx;
	int	col1=col+stepy;
		if(isSafe(M,N,row1,col1) && (adj[row1][col1]==word[y])){
			y++;
			dfs(adj,word,y,row1,col1,stepx,stepy);
		}
}
int countOcc(){
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			if(adj[i][j]==word[0]){
				for(int m=0; m<8; m++){
					dfs(adj,word,1,i,j,x1[k],y1[k]);
			}
		}
	}
	return ctr;
}
