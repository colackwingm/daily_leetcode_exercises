class NumMatrix {
public:
    vector<vector<int>> totalSum;
    NumMatrix(vector<vector<int>>& matrix) {
        int wid = matrix.size();
        int len = matrix[0].size();

        totalSum.assign(wid+1, vector<int>(len+1, 0));

        for (auto i=1; i<=wid; i++) {
            for (auto j=1; j<=len; j++) {
                totalSum[i][j] = totalSum[i-1][j] + totalSum[i][j-1] + matrix[i-1][j-1] - totalSum[i-1][j-1];
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        return totalSum[row2+1][col2+1] - totalSum[row1][col2+1] - totalSum[row2+1][col1] + totalSum[row1][col1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
