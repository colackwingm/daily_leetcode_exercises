class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.length() > magazine.length()) {
            return false;
        }
        std::unordered_map<char, int> m;
        for (auto c : magazine) {
            m[c] += 1;
        }
        for (auto c : ransomNote) {
            auto it = m.find(c);
            if (it == m.end()) {
                return false;
            } else {
                it->second -= 1;
                if (it->second == 0) {
                    m.erase(c);
                }
            }
        }
        return true;
    }
};
