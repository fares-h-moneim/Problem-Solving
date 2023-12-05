class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;

        for(int i = 0; i < nums.size(); i++){
            nums[count] = nums[i];
            while(i+1<nums.size() && nums[i] == nums[i+1]) i++;
            count++;
        }
        return count;
    }
};
