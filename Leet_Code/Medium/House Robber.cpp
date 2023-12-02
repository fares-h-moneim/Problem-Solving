class Solution {
public:
    /* Top Down */
    int rob(vector<int>& nums) {
            vector<int> dp(nums.size() + 1, -1);
            return sol(nums, dp, 0);
    }

    int sol(const vector<int>& nums, vector<int>& dp, int n){
        if(n >= nums.size()) return 0;
        if(dp[n] != -1) return dp[n];
        return dp[n] = max(sol(nums, dp, n+1), sol(nums, dp, n+2) + nums[n]);
    }
};
