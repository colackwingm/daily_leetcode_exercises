class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res;
        int rem;
        while (columnNumber > 0) {
            columnNumber -= 1;
            rem = columnNumber % 26;
            res = char(rem + 'A') + res;
            columnNumber /= 26;
        }
        return res;
    }
};
