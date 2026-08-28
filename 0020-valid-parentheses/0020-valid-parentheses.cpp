class Solution {
public:
    bool isValid(string s) {
        vector<char> vec;
        for (int i = 0; i < s.length(); i++) {
            char open = s[i];
            if (open == '[' || open == '{' || open == '(') {
                vec.push_back(open);
            }

            char close = s[i];
            if (close == ']' || close == '}' || close == ')') {
                if (vec.empty())
                    return false;
                if ((vec.back() == '(' && close == ')') ||
                    (vec.back() == '[' && close == ']') ||
                    (vec.back() == '{' && close == '}')) {
                    vec.pop_back();
                } else {
                    return false;
                }
            }
        }
        if (vec.empty()) {
            return true;
        } else {
            return false;
        }
    }
};