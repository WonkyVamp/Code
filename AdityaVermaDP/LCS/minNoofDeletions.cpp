 int minimumNumberOfDeletions(string x) { 
        // code here
        string y = x;
    	reverse(y.begin(), y.end());
    	int n = x.length();
    	int dp[n+1][n+1];
    	for(int i =0; i<=n; i++){
    		for(int j = 0; j<=n; j++){
    			if(i == 0 || j == 0)
    				dp[i][j] = 0;
    			else if( x[i-1] == y[j-1])
    				dp[i][j] = dp[i-1][j-1]+1;
    			else
    				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
    		}
    	}
    	int p = dp[n][n];
    	int ans = n - p;
    	return ans;
    } 