class Solution {
public:
    char findTheDifference(string s, string t) {
        int tar = 0;
        for (char c : t) {
            tar += c;
        }
        for (char c : s) {
            tar -= c;
        }
        return (char)tar;
    }
};
