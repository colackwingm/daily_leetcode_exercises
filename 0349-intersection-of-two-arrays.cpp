class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.empty() || nums2.empty()) {
            return vector<int>();
        }
        vector<int> res;
        std::unordered_set<int> m(nums1.begin(), nums1.end());
        for (auto num : nums2) {
            if (m.erase(num)) {
                res.push_back(num);
            }
        }
        return res;
    }
};
