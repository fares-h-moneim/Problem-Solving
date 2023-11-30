class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()>t.size()) return false;
        queue<char> temp;
        for(auto& letter:s) temp.push(letter);
        for(int i = 0; i<t.size(); i++) if(t[i] == temp.front()) temp.pop();
        return empty(temp);
    }
};
