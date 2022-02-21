class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int currPos = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[currPos] != nums[i]) {
                currPos += 1;
                nums[currPos] = nums[i];
            }
        }
        return currPos + 1;
    }
};
