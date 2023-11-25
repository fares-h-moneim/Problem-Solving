class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul = 1;
        int check = 0;
        for(int i = 0; i<nums.size(); i++){
            mul = nums[i]==0?mul:mul*nums[i];
            check += nums[i] == 0;
        }

        if(check > 1){
            vector<int> ans(nums.size(), 0);
            return ans;
        }
        else{
            vector<int> ans(nums.size());
            for(int i = 0; i<nums.size(); i++){
                if(check == 1){
                    ans[i]=nums[i]==0?mul:0;
                }
                else{
                    ans[i]=mul/nums[i];
                }
            }
            return ans;
        }
        
    }
};
