class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        std::unordered_map<int, int> rec;
        for (int i = 0; i < nums.size(); i++) {
            auto iter = rec.find(nums[i]);
            if (iter != rec.end()) {
                if (abs(i - iter->second) <= k) {
                    return true;
                } else {
                    rec[nums[i]] = i;
                }
            } else {
                rec[nums[i]] = i;
            }
        }
        return false;
    }
};
