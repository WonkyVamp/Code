#include <bits/stdc++.h>
using namespace std;
int n,m;
int arr[50][50];
bool safe(int row,int col, vector<vector<bool>> &visited){
	if(row>=0 && row<n && col>=0 && col<m && arr[row][col]==1 && !visited[row][col]){
		return true;
	}
	return false;
}
void dfs(int row,int col,vector<vector<bool>> &visited,int &ans){
	visited[row][col]=true;
	static int x[]={-1,-1,-1,0,0,1,1,1};
	static int y[]={-1,0,1,-1,1,-1,0,1};
	for(int d=0; d<8; d++){
		if(safe(row+x[d],col+y[d],visited)){
			ans++;
			dfs(row+x[d],col+y[d],visited,ans);
		}
	}
}
int maxArea(){
	int max_ans=0;
	int ans;
	vector<vector<bool>> visited(n,vector<bool>(m,false));
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(!visited[i][j]&& arr[i][j]==1){
				ans=1;
				dfs(i,j,visited,ans);
				max_ans=max(max_ans,ans);
			}
		}
	}
	return max_ans;
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
		cout << maxArea()<<endl;
		for(int i=0; i<n; i++){
			//arr[i]=new int[m];
			for(int j=0; j<m; j++){
				arr[i][j]=0;
			}
		}
	}
}