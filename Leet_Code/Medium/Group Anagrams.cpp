class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;
        string temp;
        for(int i = 0; i<strs.size(); i++){
            temp = strs[i];
            sort(temp.begin(), temp.end());
            anagrams[temp].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto& it:anagrams){
            ans.push_back(it.second);
        }
        return ans;
    }
};
