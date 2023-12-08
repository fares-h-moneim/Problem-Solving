class Solution {
public:
    int characterReplacement(string s, int k) {
        int i = 0, j = 0, maxCount = 0, ans = 0;
        unordered_map<char, int> freq;

        for (j = 0; j < s.size(); ++j) {
            freq[s[j]]++;
            maxCount = max(maxCount, freq[s[j]]);
            if ((j - i + 1) - maxCount > k) {
                freq[s[i]]--;
                i++;
            }
            ans = max(ans, j - i + 1);
        }

        return ans;
    }
};
