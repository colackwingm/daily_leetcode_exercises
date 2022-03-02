class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res;
        int i = 0, j = 0;
        while (i < m || j < n) {
            if ((i < m && j < n && nums1[i] < nums2[j]) || (i < m && j >= n)) {
                res.push_back(nums1[i]);
                i += 1;
            } else if ((i < m && j < n && nums1[i] >= nums2[j]) || (i >= m && j < n)) {
                res.push_back(nums2[j]);
                j += 1;
            }
        }
        nums1 = res;
    }
};
