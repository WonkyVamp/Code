#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
vector <int> ans;
vector <int> dfs(vector<int> *g, int N)
{
    ans.clear();
    vector <bool> visited(N,false);
    solve(g,visited,0);
    return ans;
}
void solve(vector<int> *adj, vector<bool> &vis, int s) {
	vis[s]=true;
	ans.push_back(s);
	for(auto it : adj[s]){
		if(!vis[it])
			solve(g,vis,it);
	}
}