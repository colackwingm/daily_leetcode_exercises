class Solution {
public:
    string minWindow(string s, string t) {
        std::unordered_map<char, int> target, window;
        for (char c : t) {
            target[c]++;
        }
        int l = 0, r = 0;
        int off = 0, len = INT_MAX;
        int valid = 0;
        while (r < s.size()) {
            char cr = s[r];
            r++;
            if (target.count(cr)) {
                window[cr]++;
                if (window[cr] == target[cr]) {
                    valid++;
                }
            }
            while (valid == target.size()) {
                if (r - l < len) {
                    off = l;
                    len = r - l;
                }
                char cl = s[l];
                l++;
                if (target.count(cl)) {
                    window[cl]--;
                    if (window[cl] < target[cl]) {
                        valid--;
                    }
                }
            }
        }
        if (len == INT_MAX) {
            return "";
        } else {
            return s.substr(off, len);
        }
    }
};
