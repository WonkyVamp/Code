bool dfs(vector<int>*adj, vector<bool>&vis,int start,int prev){
	vis[start]=true;
	for(auto itr:adj[start]){
		if(!visited[itr]){
			if(dfs(adj,vis,itr,start))
				return true;
		}
		else if(itr!=prev)
			return true;
	}
	return false;
}
bool uc(vector<int> *adj, int N){
	vector<bool> vis(N,false);
	for(int i=0; i<N; i++){
		if(!visited[i])
			if(dfs(adj,visited,i,-1))
				return true;
	}
	return false;
}