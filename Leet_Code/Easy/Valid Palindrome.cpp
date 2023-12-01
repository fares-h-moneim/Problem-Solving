class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size()-1;
        while(i<j){
            while(i<j && !isalnum(s[j])) j--;
            while(i<j && !isalnum(s[i])) i++;
            if(tolower(s[i]) == tolower(s[j])){i++; j--;}
            else return false;
        }
        return true;
    }
};
