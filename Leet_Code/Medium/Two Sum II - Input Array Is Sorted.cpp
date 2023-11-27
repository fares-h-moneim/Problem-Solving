class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size()-1;
        vector<int> ans(2,-1);
        while(i<numbers.size() && j > 0){
            if(numbers[i]+numbers[j] == target){
                ans[0]=i+1; ans[1] = j+1;
                return ans;
            }
            else if(numbers[i]+numbers[j] < target) i++;
            else j--;
        }
        return ans;
    }
};
