class Solution {
public:
    bool isPerfectSquare(int num) {
        long l = 1, r = max(1, num/2);
        while (l <= r) {
            long m = l + (r - l) / 2;
            if (m * m == num) {
                return true;
            } else if (m * m < num) {
                l = m + 1;
            } else if (m * m > num) {
                r = m - 1;
            }
        }
        return false;
    }
};
