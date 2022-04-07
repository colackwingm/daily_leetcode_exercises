class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.empty() || nums2.empty()) {
            return std::vector<int>();
        }
        std::vector<int> res;
        std::unordered_map<int, int> m;
        for (auto num1 : nums1) {
            m[num1] += 1;
        }
        for (auto num2 : nums2) {
            auto it = m.find(num2);
            if (it != m.end()) {
                res.push_back(num2);
                m[num2] -= 1;
                if (m[num2] == 0) {
                    m.erase(num2);
                }
            }
        }
        return res;
    }
};
