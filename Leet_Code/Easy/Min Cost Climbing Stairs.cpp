class Solution {
public:
    /* Bottom Up */
    int minCostClimbingStairs(std::vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n + 1, INT_MAX);
        dp[n] = 0; dp[n-1] = cost[n-1]; 
        for (int i = n - 2; i >= 0; i--) dp[i] = cost[i] + min(dp[i+1], dp[i+2]);
        return min(dp[0], dp[1]);
    }

    /* Top Down */
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size() + 1, -1);
        return min(minCost(cost, dp, 0), minCost(cost, dp, 1));
    }

    int minCost(const vector<int>& cost, vector<int>& dp, int n) {
        if (n >= cost.size()) return 0;
        if (dp[n] != -1) return dp[n];
        return dp[n] = cost[n] + min(minCost(cost, dp, n + 1), minCost(cost, dp, n + 2));
    }
};
