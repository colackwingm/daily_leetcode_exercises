class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits.back() += 1;
        if (digits.back() <= 9) {
            return digits;
        } else {
            digits.back() = 0;
            bool carry = true;
            for (int i = digits.size()-2; i >= 0; i--) {
                digits[i] += 1;
                if (digits[i] <= 9) {
                    carry = false;
                    break;
                } else {
                    digits[i] = 0;
                }
            }
            if (carry) {
                digits.insert(digits.begin(), 1);
            }
            return digits;
        }
        return {};
    }
};
