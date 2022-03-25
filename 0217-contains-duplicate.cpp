class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> rec;
        for (auto num : nums) {
            auto it = rec.find(num);
            if (it != rec.end()) {
                return true;
            } else {
                rec[num] += 1;
            }
        }
        return false;
    }
};
