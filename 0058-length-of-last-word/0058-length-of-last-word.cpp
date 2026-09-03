class Solution {
public:
    int lengthOfLastWord(string s) {
        string ans;
    bool foundWord = false;

    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == ' ') {
            if (foundWord) {
                break;
            }
            continue;
        }

        foundWord = true;
        ans.push_back(s[i]);
    }

    return ans.length();
    }
};