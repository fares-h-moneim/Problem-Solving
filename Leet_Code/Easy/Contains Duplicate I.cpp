class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> unique;
        for(auto&it:nums){
            unique.insert(it);
        }
        return unique.size()!=nums.size();
    }
};
