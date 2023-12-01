class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0, j = nums.size()-1;
        vector<int> ans(2, -1);
        while(i<j){
            if(nums[i]+nums[j] == target){
                ans[0] = i + 1; ans[1] = j + 1;
                return ans;
            }
            if(nums[i]+nums[j]<target) i++;
            else j--;
        }
        return ans;
    }
};
