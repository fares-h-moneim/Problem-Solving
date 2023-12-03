class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> unique;
        int maxS = 0, l = 0;
        for(int r = 0; r<s.size(); r++){
            while(unique.find(s[r]) != unique.end()){
                 unique.erase(s[l]);
                 l++;
            }
            unique.insert(s[r]);
            maxS = max(maxS, r-l+1);
        }
        return maxS;
    }
};
