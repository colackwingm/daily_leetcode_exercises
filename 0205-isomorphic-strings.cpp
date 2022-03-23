class Solution {
public:
    bool isDirectIso(string s, string t) {
        std::unordered_map<char, char> comp;
        for (int i = 0; i <= s.size(); i++) {
            auto iter = comp.find(s[i]);
            if (iter != comp.end()) {
                if (iter->second != t[i]) {
                    return false;
                }
            } else {
                comp[s[i]] = t[i];
            }
        }
        return true;
    }

    bool isIsomorphic(string s, string t) {
        return isDirectIso(s, t) && isDirectIso(t, s);
    }
};
