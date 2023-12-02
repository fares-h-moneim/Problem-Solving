class Solution {
public:
    /* Top Down */
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        return solution(dp, n);
    }
    int solution(vector<int>& dp, int n){
        if(n == 0) return 1;
        if(n<0) return 0;
        if(dp[n] == -1) dp[n] = solution(dp, n-1) + solution(dp, n-2);
        return dp[n];
    }

    /* Bottom Up */
    int climbStairs(int n) {
        vector<int> dp(n+1, 1); dp[n] = 1; dp[n-1] = 1;
        for(int i = n-2; i>=0; i--) dp[i] = dp[i+1] + dp[i+2];
        return dp[0];
    }
};
