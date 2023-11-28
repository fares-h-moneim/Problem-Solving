class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; ++i) {
            int target = -nums[i];
            int j = i + 1, k = nums.size() - 1;

            while (j < k) {
                int sum = nums[j] + nums[k];
                if (sum == target) {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    while (j < k && nums[j] == nums[j + 1]) j++;
                    while (j < k && nums[k] == nums[k - 1]) k--;
                    j++;
                    k--;
                } else if (sum < target) j++;
                else k--;
            }
            while (i < nums.size() - 2 && nums[i] == nums[i + 1]) i++;
        }
        return ans;
    }
};
