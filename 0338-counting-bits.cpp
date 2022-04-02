#include <bit>
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n+1, 0);
        int i = 1;
        while (i <= n) {
            // res[i] = __popcount(i);
            res[i] = res[i&(i-1)] + 1;
            i += 1;
        }
        return res;
    }
};
