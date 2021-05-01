#include <bits/stdc++.h>
using namespace std;

int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        int n = nums.size();
        for(int i =0; i<nums.size(); i++){
            sum += nums[i];
        }
        int sum1 = (target + sum) / 2;
        if(sum < target || (target + sum) %2 != 0) // very obvious that if sum is only less than target than no possible set
            return 0;
        int dp[n+1][sum1+1];
        memset(dp, 0, sizeof(dp));
        for(int i =0; i<=n; i++)
            dp[i][0] = 1;
        for(int i = 1; i<= n; i++){
            for(int j = 0; j <= sum1; j++){// j = 0 needs t be included in the calculations because value in array might be 0
                if(j >= nums[i-1])
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-nums[i-1]];
                else 
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[n][sum1];
    }