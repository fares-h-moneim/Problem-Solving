class Solution {
public:
  /* Solution 1 */
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        unordered_map<int, int> freq(nums.size());
        for(int i = 0; i<nums.size(); i++){
            count+=freq[nums[i]];
            freq[nums[i]]++;
        }
        return count;
    }


  /* Solution 2 */
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        unordered_map<int, int> freq(nums.size());
        for(int i = 0; i<nums.size(); i++){
            count+=freq[nums[i]];
            freq[nums[i]]++;
        }
        return count;
    }
};
