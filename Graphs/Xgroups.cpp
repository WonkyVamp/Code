#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isSafe(int row, int col, int n, int m){
	if(row>=0 && row<n && col>=0 && col<m)
		return true;
	return false;
}
void dfs(vector<vector<char>> v, vector<vector<bool>> &vis, int row, int col, int n, int m){
	vis[row][col]=true;
	static int x[]= {-1,1,0,0};
	static int y[]= {0,0,-1,1};
	for(int k=0; k<4; k++){
		if(isSafe(row+x[k],col+y[k],n,m) && !vis[row+x[k]][col+y[k]] && v[row+x[k]][col+y[k]]=='X')
			dfs(v,vis,row+x[k],col+y[k],n,m);
	}
}
int main(){
	int t;
	cin >> t;
	for(int z=0; z<t; z++){
		int n,m;
		cin >> n >> m;
		string s;
        vector<vector<bool>> vis(n,vector<bool> (m,false));
        vector<vector<char>> v;
        for(int i=0;i<n;i++){
            cin>>s;
            vector<char> v1;
            for(int j=0;j<s.length();j++){
                v1.push_back(s[j]);
            }
            v.push_back(v1);
        }
        int ctr = 0;
        for(int i=0; i<n; i++){
        	for(int j=0; j<m; j++){
        		if(v[i][j]=='X' && !vis[i][j]){
        			ctr++;
        			dfs(v,vis,i,j,n,m);
        		}
        	}
        }
        cout << ctr << endl;
	}
}