class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for (char c : s) {
            if ((c>='A' && c<='Z') || (c>='a' && c<='z') || (c>='0' && c<='9')) {
                str += tolower(c);
            }
        }
        int l = 0, r = str.size()-1;
        while (l <= r) {
            if (str[l] != str[r]) {
                return false;
            }
            l += 1;
            r -= 1;
        }
        return true;
    }
};
