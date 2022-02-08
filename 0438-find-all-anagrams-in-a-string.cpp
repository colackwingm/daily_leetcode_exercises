class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        std::unordered_map<char, int> target, window;
        for (char c : p) {
            target[c] += 1;
        }
        int l = 0, r = 0;
        vector<int> res;
        int valid = 0;
        while (r < s.size()) {
            char cr = s[r];
            r += 1;
            if (target.count(cr)) {
                window[cr] += 1;
                if (window[cr] == target[cr]) {
                    valid += 1;
                }
            }
            while (r - l >= p.size()) {
                if (valid == target.size()) {
                    res.push_back(l);
                }
                char cl = s[l];
                l += 1;
                if (target.count(cl)) {
                    if (window[cl] == target[cl]) {
                        valid -= 1;
                    }
                    window[cl] -= 1;
                }
            }
        }
        return res;
    }
};
