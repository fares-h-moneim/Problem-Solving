class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<nums.size(); i++){
            int target = -1*nums[i];
            int j = i+1, k = nums.size()-1;
            vector<int> temp(3);
            while(j<k){
                if(nums[j]+nums[k]==target){
                    temp[0] = nums[i]; temp[1] = nums[j]; temp[2] = nums[k];
                    ans.push_back(temp);
                    while (j < k && nums[j] == nums[j + 1]) j++;
                    while (j < k && nums[k] == nums[k - 1]) k--;
                    j++; k--;
                }
                if(nums[j]+nums[k]<target) j++;
                else k--;
            }
        }
        return ans;
    }
};
