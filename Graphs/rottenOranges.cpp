#include <bits/stdc++.h>
using namespace std;
int n,m;
int arr[100][100];
struct ele{
	int x;
	int y;
};
bool safe(int row,int col){
	if(row>=0 && row<n && col>=0 && col<m ){
		return true;
	}
	return false;
}
bool isDelim(ele temp){
	if(temp.x==-1 && temp.y==-1)
		return true;
	return false;
}
int bfs(){
	queue<ele>q;
	int ans=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(arr[i][j]==2){
				ele temp;
				temp.x=i;
				temp.y=j;
				q.push(temp);
			}
		}
	}
	ele temp;
	temp.x=-1;
	temp.y=-1;
	q.push(temp);
	while(!q.empty()){
		bool flag = false;
		while(!isDelim(q.front())){
			ele temp1=q.front();
			cout << temp1.x << temp1.y << endl;
			//left
			if(safe(temp1.x,temp1.y-1) && arr[temp1.x][temp.y-1]==1){
				if(!flag){
					ans++;
					flag=true;
				}
				arr[temp1.x][temp1.y-1]=2;
				temp1.y--;
				q.push(temp1);
				temp1.y++;
				cout << temp1.x << temp1.y << endl; 
			}
			//right
			if(safe(temp1.x,temp1.y+1) && arr[temp1.x][temp.y+1]==1){
				if(!flag){
					ans++;
					flag=true;
				}
				arr[temp1.x][temp1.y+1]=2;
				temp1.y++;
				q.push(temp1);
				temp1.y--;
				cout << temp1.x << temp1.y << endl;
			}
			//top
			if(safe(temp1.x-1,temp1.y) && arr[temp1.x-1][temp.y]==1){
				if(!flag){
					ans++;
					flag=true;
				}
				arr[temp1.x-1][temp1.y]=2;
				temp1.x--;
				q.push(temp1);
				temp1.x++;
				cout << temp1.x << temp1.y << endl;
			}
			//bottom
			if(safe(temp1.x+1,temp1.y) && arr[temp1.x+1][temp.y]==1){
				if(!flag){
					ans++;
					flag=true;
				}
				arr[temp1.x+1][temp1.y]=2;
				cout << arr[temp1.x+1][temp1.y] << endl;
				temp1.x++;
				q.push(temp1);
				temp1.x--;
				cout << temp1.x << temp1.y << endl;
			}
			q.pop();
		}
		q.pop();
		if(!q.empty()){
			ele temp1;
			temp1.x=-1;
			temp1.y=-1;
			q.push(temp1);
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(arr[i][j]==1){
				//cout << i << j;
				return -1;
			}
		}
	}
	return ans;
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
		cout << bfs() << endl;
		for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			arr[i][j]=0;
		}
	}
	}
}
// #include <iostream>
// #include <queue>
// #include <algorithm>
// using namespace std;
// int n,m;
// int arr[100][100];
// bool safe(int row,int col){
// 	if(row>=0 && row<n && col>=0 && col<m ){
// 		return true;
// 	}
// 	return false;
// }
// bool isDelim(queue<pair<int,int>>q){
// 	pair<int,int>x = q.front();
// 	if(x.first==-1 && x.second==-1)
// 		return true;
// 	return false;
// }
// int bfs(){
// 	queue<pair<int,int>>q;
// 	int ans=0;
// 	for(int i=0; i<n; i++){
// 		for(int j=0; j<m; j++){
// 			if(arr[i][j]==2){
// 				q.push({i,j});
// 			}
// 		}
// 	}
// 	q.push({-1,-1});
// 	while(!q.empty()){
// 		bool flag = false;
// 		while(!isDelim(q)){
// 			pair<int,int>x = q.front();
// 			//left
// 			if(safe(x.first,x.second-1) && arr[x.first][x.second-1]==1){
// 				if(!flag){
// 					ans++;
// 					flag=true;
// 				}
// 				arr[x.first][x.second-1]=2;
// 				q.push({x.first,x.second-1});
// 			}
// 			//right
// 			if(safe(x.first,x.second+1) && arr[x.first][x.second+1]==1){
// 				if(!flag){
// 					ans++;
// 					flag=true;
// 				}
// 				arr[x.first][x.second+1]=2;
// 				q.push({x.first,x.second+1});
// 			}
// 			//top
// 			if(safe(x.first-1,x.second) && arr[x.first-1][x.second]==1){
// 				if(!flag){
// 					ans++;
// 					flag=true;
// 				}
// 				arr[x.first-1][x.second]=2;
// 				q.push({x.first-1,x.second});
// 			}
// 			//bottom
// 			if(safe(x.first+1,x.second) && arr[x.first+1][x.second]==1){
// 				if(!flag){
// 					ans++;
// 					flag=true;
// 				}
// 				arr[x.first+1][x.second]=2;
// 				q.push({x.first+1,x.second});
// 			}
// 			q.pop();
// 		}
// 		q.pop();
// 		if(!q.empty()){
// 			q.push({-1,-1});
// 		}
// 	}
// 	for(int i=0; i<n; i++){
// 		for(int j=0; j<m; j++){
// 			if(arr[i][j]==1)
// 				return -1;
// 		}
// 	}
// 	return ans;
// }

// int main(){
// 	int t;
// 	cin >> t;
// 	for(int z=0; z<t; z++){
// 		cin >> n >> m;
// 		//int **arr=new int*[m];
// 		for(int i=0; i<n; i++){
// 			//arr[i]=new int[m];
// 			for(int j=0; j<m; j++){
// 				cin >> arr[i][j];
// 			}
// 		}
// 		cout << bfs() << endl;
// 		for(int i=0; i<n; i++){
// 		for(int j=0; j<m; j++){
// 			arr[i][j]=0;
// 		}
// 	}
// 	}
// }