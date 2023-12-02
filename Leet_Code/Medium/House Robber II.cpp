class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];
        vector<int> dp(nums.size(), -1);
        int ch1 = sol(nums, dp, 0, nums.size() - 2);
        fill(dp.begin(), dp.end(), -1);
        int ch2 = sol(nums, dp, 1, nums.size() - 1);
        return max(ch1, ch2);
    }

    int sol(const vector<int>& nums, vector<int>& dp, int n, int stop) {
        if (n > stop) return 0;
        if (dp[n] != -1) return dp[n];
        return dp[n] = max(sol(nums, dp, n + 1, stop), sol(nums, dp, n + 2, stop) + nums[n]);
    }
};
