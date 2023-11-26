class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        vector<int> dp(nums.size(), 1);
        sort(nums.begin(), nums.end());

        for(int i = 1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]) dp[i] = dp[i-1];
            else if(nums[i]-1 == nums[i-1]){
                dp[i] += dp[i-1];
            }
        }

        int max = dp[0];
        for(int i = 0; i<dp.size(); i++){
            if(dp[i]>max) max = dp[i];
        }

        return max;
    }
};
