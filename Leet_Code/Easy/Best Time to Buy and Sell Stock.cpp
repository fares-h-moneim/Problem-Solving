class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> dp(2);
        dp[0] = INT_MAX, dp[1] = 0;
        for(int i = 0; i<prices.size(); i++){
            if(prices[i] < dp[0]) dp[0] = prices[i];
            else if(prices[i]-dp[0]>dp[1]) dp[1] = prices[i]-dp[0];
        }
        return dp[1];
    }
};
