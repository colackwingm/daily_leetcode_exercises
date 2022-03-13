class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int vote = 0, candidate;
        for (int num : nums) {
            if (vote == 0) {
                candidate = num;
            }
            if (num == candidate) {
                vote += 1;
            } else {
                vote -= 1;
            }
        }
        return candidate;
    }
};
