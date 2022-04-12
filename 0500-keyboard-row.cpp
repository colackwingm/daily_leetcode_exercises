class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> res;
        std::regex reg("[qwertyuiop]*|[asdfghjkl]*|[zxcvbnm]*", std::regex::icase);
        for (auto w : words) {
            if (std::regex_match(w, reg)) {
                res.push_back(w);
            }
        }
        return res;
    }
};
