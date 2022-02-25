class Solution {
public:
    struct CurrRes {
        char thisBit;
        int carry;
    };

    int char2int(int a) {
        return int(a) - 48;
    }

    CurrRes getRes(int a, int b, int carry) {
        switch (a+b+carry) {
            case 0: return {'0', 0};
            case 1: return {'1', 0};
            case 2: return {'0', 1};
            case 3: return {'1', 1};
        }
        return {'e', -1};
    }

    string addBinary(string a, string b) {
        int i = a.size()-1, j = b.size()-1, carry = 0;
        string res = "";
        while (i >= 0 || j >= 0) {
            int bitA = 0, bitB = 0;
            if (i >= 0) {
                bitA = char2int(a[i]);
                i -= 1;
            }
            if (j >= 0) {
                bitB = char2int(b[j]);
                j -= 1;
            }
            CurrRes temp = getRes(bitA, bitB, carry);
            res = temp.thisBit + res;
            carry = temp.carry;
        }
        if (carry) {
            res = "1" + res;
        }
        return res;
    }
};
