class Solution {
public:
    int value(char c) {
        switch(c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default : return -1;
        }
    }

    int romanToInt(string s) {
        int i = 0;
        int res = 0;
        while (i < s.size()) {
            int curr = value(s[i]);
            int next = value(s[i+1]);
            if (curr >= next) {
                res += curr;
            } else {
                res += (next - curr);
                i += 1;
            }
            i += 1;
        }
        return res;
    }
};
