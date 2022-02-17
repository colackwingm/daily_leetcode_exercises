class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int ori = x;
        long rev = 0;
        while (ori != 0) {
            rev = 10 * rev + ori % 10;
            ori /= 10;
        }
        std::cout << rev;
        return rev == x;
    }
};
