class Solution {
public:
    vector<int> getDiff(vector<int>& arr) {
        vector<int> res = {arr[0]};
        for (auto i = 1; i < arr.size(); i++) {
            res.push_back(arr[i] - arr[i-1]);
        }
        return res;
    }
    void increment(vector<int>& diff, int start, int end, int k) {
        diff[start] += k;
        if (end+1 < diff.size()) {
            diff[end+1] -= k;
        }
    }
    vector<int> reconstruct(vector<int>& diff) {
        vector<int> res = {diff[0]};
        for (auto i = 1; i < diff.size(); i++) {
            res.push_back(diff[i] + res[i-1]);
        }
        return res;
    }
    bool judge(vector<int>& arr, int capacity) {
        for (auto i = 0; i < arr.size(); i++) {
            if (arr[i] > capacity) {
                return false;
            }
        }
        return true;
    }

    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> init (1000+1, 0);
        vector<int> diff = getDiff(init);
        for (auto trip : trips) {
            increment(diff, trip[1], trip[2]-1, trip[0]);
        }
        vector<int> fin = reconstruct(diff);
        return judge(fin, capacity);
    }
};
