class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res(n);
        for (int i = 0; i < n; i++) {
            res[i] = to_string(i+1);
        }
        for (int i = 2; i < n; i += 3) {
            res[i] = "Fizz";
        }
        for (int i = 4; i < n; i += 5) {
            res[i] = "Buzz";
        }
        for (int i = 14; i < n; i += 15) {
            res[i] = "FizzBuzz";
        }
        return res;
    }
};
