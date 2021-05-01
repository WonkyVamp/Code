#include <bits/stdc++.h>
using namespace std;
int n,m;
int arr[100][100];
bool safe(int row,int col, int t){
	if(row>=0 && row<n && col>=0 && col<m && arr[row][col]==t){
		return true;
	}
	return false;
}
void dfs(int k,int row,int col,int t){
	arr[row][col]=k;
	static int x1[]={-1,0,0,1};
	static int y1[]={0,-1,1,0};
	for(int d=0; d<4; d++){
		if(safe(row+x1[d],col+y1[d],t))
			dfs(k,row+x1[d],col+y1[d],t);
	}
	
}
int main(){
	int t;
	cin >> t;
	for(int z=0; z<t; z++){
		cin >> n >> m;
		//int **arr=new int*[m];
		for(int i=0; i<n; i++){
			//arr[i]=new int[m];
			for(int j=0; j<m; j++){
				cin >> arr[i][j];
			}
		}
		int x,y,k;
		cin >> x >> y >> k;
		int t= arr[x][y];
		dfs(k,x,y,t);
		for(int i=0; i<n; i++){
		for( int j=0; j<m; j++){
			if(i==n-1 && j== m-1)
				cout << arr[i][j];
			else
				cout << arr[i][j] << " ";
			}
		}
		cout << "\n";
	}
}