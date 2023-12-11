class Solution {
public:
    bool isValid(std::string s) {
        stack<char> par;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') par.push(s[i]);
            else if (!par.empty() &&
                       (s[i] == ')' && par.top() == '(' ||
                        s[i] == ']' && par.top() == '[' ||
                        s[i] == '}' && par.top() == '{')) par.pop();
            else if (s[i] == ')' || s[i] == '}' || s[i] == ']') return false;
        }

        return par.empty();
    }
};
