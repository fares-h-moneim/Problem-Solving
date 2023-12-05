class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int count = 1, duplicates = 0;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1]) duplicates++;
            else duplicates = 0;

            if (duplicates < 2) {
                nums[count] = nums[i];
                count++;
            }
        }
        return count;
    }
};
