class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        std::unordered_map<char, int> counts;
        for (auto i = 0; i < s.length(); i++) {
            counts[s[i]] += 1;
            counts[t[i]] -= 1;
        }
        for (auto count : counts) {
            if (count.second) {
                return false;
            }
        }
        return true;
    }
};
