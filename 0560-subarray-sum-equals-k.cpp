class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int currSum = 0;
        std::map<int, int> sumMap;
        int res = 0;
        sumMap[0] = 1;
        for(auto i = 0; i < nums.size(); i++) {
            currSum += nums[i];
            if (sumMap.find(currSum-k) != sumMap.end()) {
                res += sumMap[currSum-k];
            }
            sumMap[currSum]++;
        }
        return res;
    }
};
