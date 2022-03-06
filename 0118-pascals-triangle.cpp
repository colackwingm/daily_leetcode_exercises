class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        res.push_back({1});
        for (int i = 2; i <= numRows; i++) {
            vector<int> thisRes(i, 1);
            for (int j = 1; j < i - 1; j++) {
                thisRes[j] = res[i-2][j-1] + res[i-2][j];
            }
            res.push_back(thisRes);
        }
        return res;
    }
};
