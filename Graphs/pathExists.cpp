#include <bits/stdc++.h>
using namespace std;
bool isSafe(int row, int col, int N){
	return(row>=0 && row<N && col>=0 && col<N);
}
int bfs(int **adj, int N){
	queue<pair<int,int>>q;
}
int main(){
	int t;
	cin >> t;
	for(int x=0; z<t; z++){
		int N;
		cin >> N;
		int **adj=new int[N];
		for(int i=0; i<N; i++){
			adj[i]=new int[N];
			for(int j=0; j<N; j++)
				cin >> adj[i][j];
		}
		int x = bfs(adj,N);
		cout << x << endl;
	}
}