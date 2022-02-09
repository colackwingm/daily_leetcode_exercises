class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_map<char, int> window;
        int l = 0, r = 0;
        int res = 0;
        while (r < s.size()) {
            char cr = s[r];
            r += 1;
            window[cr] += 1;
            while (window[cr] > 1) {
                char cl = s[l];
                l += 1;
                window[cl] -= 1;
            }
            res = max(res, r - l);
        }
        return res;
    }
};
