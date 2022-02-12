class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> seen;
        for (auto i = 0; i < nums.size(); i++) {
            int need = target - nums[i];
            if (seen.count(need)) {
                return {seen.find(need)->second, i};
            }
            seen[nums[i]] = i;
        }
        return {-1, -1};
    }
};
