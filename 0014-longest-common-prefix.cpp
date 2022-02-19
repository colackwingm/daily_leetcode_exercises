class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) {
            return "";
        }
        if (strs.size() == 1) {
            return strs[0];
        }
        string res = "";
        for (int i = 0; i < strs[0].size(); i++) {
            for (string str : strs) {
                if (str[i] != strs[0][i]) {
                    return res;
                }
            }
            res += strs[0][i];
        }
        return res;
    }
};
