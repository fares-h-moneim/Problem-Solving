class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for(int i = 0; i<strs[0].size(); i++){
            char check = strs[0][i];
            for(int j = 0; j<strs.size(); j++) if(strs[j][i] != check) return ans;
            ans+=check;
        }
        return ans;
    }
};
