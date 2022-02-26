class Solution {
public:
    int mySqrt(int x) {
        long l = 1, r = x/2, mid;
        while (l <= r) {
            mid = l + (r - l) / 2;
            if (mid * mid < x) {
                l = mid + 1;
            } else if (mid * mid > x) {
                r = mid - 1;
            } else if (mid * mid == x) {
                return mid;
            }
        }
        if (mid * mid > x) {
            mid -= 1;
        }
        return mid;
    }
};
