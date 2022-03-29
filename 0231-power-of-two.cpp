#include <bit>
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && __popcount(n) == 1;
    }
};
// https://leetcode.com/problems/power-of-two/discuss/1638961/C%2B%2BPython-Simple-Solutions-w-Explanation-or-All-Possible-Solutions-Explained
