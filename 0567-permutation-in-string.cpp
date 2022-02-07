class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        std::unordered_map<char, int> target, window;
        for (char c : s1) {
            target[c] += 1;
        }
        int l = 0, r = 0;
        int valid = 0;
        while (r < s2.size()) {
            char cr = s2[r];
            r += 1;
            if (target.count(cr)) {
                window[cr] += 1;
                if (window[cr] == target[cr]) {
                    valid += 1;
                }
            }
            while (r-l >= s1.size()) {
                if (valid == target.size()) {
                    return true;
                }
                char cl = s2[l];
                l += 1;
                if (target.count(cl)) {
                    if (window[cl] == target[cl]) {
                        valid -= 1;
                    }
                    window[cl] -= 1;
                }
            }
        }
        return false;
    }
};
