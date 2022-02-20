class Solution {
public:
    bool isValid(string s) {
        stack<char> count;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                count.push(c);
            } else {
                if ((c == ')' && count.size() > 0 && count.top() == '(') ||
                    (c == ']' && count.size() > 0 && count.top() == '[') ||
                    (c == '}' && count.size() > 0 && count.top() == '{')) {
                    count.pop();
                } else {
                    return false;
                }
            }
        }
        if (count.empty()) {
            return true;
        }
        return false;
    }
};
