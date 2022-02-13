class Solution {
public:
    vector<int> thisEntry(vector<int>& nums, int idx) {
        vector<int> res;
        int i = 0;
        while (idx > 0) {
            if (idx & 1 == 1) {
                res.push_back(nums[i]);
            }
            i += 1;
            idx = idx >> 1;
        }
        return res;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        for (auto i = 0; i < (1 << nums.size()); i++) {
            res.push_back(thisEntry(nums, i));
        }
        return res;
    }
};
