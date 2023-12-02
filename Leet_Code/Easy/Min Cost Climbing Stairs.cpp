class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size(), -1);
        return min(sol(cost, 0, dp), sol(cost, 1, dp));
    }

    int sol(vector<int>& cost, int n, vector<int>& dp) {
        if (n >= cost.size()) return 0;
        if (dp[n] != -1) return dp[n];
        return dp[n] = cost[n] + min(sol(cost, n + 1, dp), sol(cost, n + 2, dp));
    }
};
