#include <cmath>
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = 0;
        int len = columnTitle.size();
        for (int i = 0; i < len; i++) {
            res += (columnTitle[len-i-1] - '@') * pow(26, i);
        }
        return res;
    }
};
