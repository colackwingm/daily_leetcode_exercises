class NumArray {
public:
    vector<int> totalSum = {0};
    NumArray(vector<int>& nums) {
        for (auto num : nums) {
            totalSum.push_back(totalSum.back() + num);
        }
    }

    int sumRange(int left, int right) {
        return totalSum[right+1] - totalSum[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
