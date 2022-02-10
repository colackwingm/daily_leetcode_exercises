class Solution {
public:
    int lBound(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) {
                r = mid - 1;
            } else if (nums[mid] < target) {
                l = mid + 1;
            } else if (nums[mid] > target) {
                r = mid - 1;
            }
        }
        if (l >= nums.size() || nums[l] != target) {
            return -1;
        }
        return l;
    }

    int rBound(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) {
                l = mid + 1;
            } else if (nums[mid] < target) {
                l = mid + 1;
            } else if (nums[mid] > target) {
                r = mid - 1;
            }
        }
        if (r < 0 || nums[r] != target) {
            return -1;
        }
        return r;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return {lBound(nums, target), rBound(nums, target)};
    }
};
