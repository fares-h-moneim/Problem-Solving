class Solution {
public:
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
};
