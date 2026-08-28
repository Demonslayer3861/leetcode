class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        string ans;
        if (strs.size() == 1 && strs[0].length() == 1) {
            return strs[0];
        }

        for (int i = 1; i < strs.size(); i++) {
            ans = "";
            int j = 0;
            string str = strs[i];
            while (j < str.length() && j < prefix.length()) {

                if (str[j] == prefix[j]) {
                    ans.push_back(str[j]);
                }else{
                    break;
                }
                j++;
            }
            prefix = ans;
        }
        return ans;
    }
};