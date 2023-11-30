class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max = -1;
        vector<int> ans(arr.size());
        for(int i = arr.size()-1; i>=0; i--){
            ans[i] = max;
            if(arr[i]>max) max = arr[i];
        }
        return ans;
    }
};
