class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0, i = s.size() -1;
        while(s[i] == ' ' && i>=0) i--;
        for(i; i>=0; i--){
            if(s[i] != ' ') count++;
            else return count;
        }
        return count;
    }
};
