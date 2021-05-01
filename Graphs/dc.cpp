bool solve(int s, vector<int> *adj, vector<bool>&vis, vector<bool>&recStack){
	vis[s]=true;
	recStack[s]=true;
	for(auto it : adj[s]){
		if(!vis[it]){
			if(solve(it,adj,vis,recStack))
				return true;
		}
		else if(recStack[it])
			return true;
	}
	recStack[s]=false;
	return false;
}
bool isCyclic(int V, vector<int> adj[])
{
    vector <bool> vis(V,false);
    vector <bool> recStack(V,false);
    for(int i=0; i<V; i++){
    	if(!vis[i] && solve(i, adj, vis, recStack))
    		return true;
    }
    return false;
}