class Solution {
public:
    int lengthOfLastWord(string s) {
        int res = 0, i = s.size()-1;
        while(i >= 0) {
            if (s[i] != ' ') {
                break;
            }
            i -= 1;
        }
        for (; i >= 0; i--) {
            if (s[i] != ' ') {
                res += 1;
            } else {
                break;
            }
        }
        return res;
    }
};
