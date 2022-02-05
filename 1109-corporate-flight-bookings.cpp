class Solution {
public:
    vector<int> getDiff(vector<int>& arr) {
        vector<int> res = {arr[0]};
        for (auto i = 1; i < arr.size(); i++) {
            res.push_back(arr[i]-arr[i-1]);
        }
        return res;
    }
    void increment(vector<int>& diff, int start, int end, int k) {
        diff[start] += k;
        if (end+1 <= diff.size()-1) {
            diff[end+1] -= k;
        }
    }
    vector<int> reconstruct(vector<int>& diff){
        vector<int> res = {diff[0]};
        for (auto i = 1; i < diff.size(); i++) {
            res.push_back(diff[i] + res[i-1]);
        }
        return res;
    }

    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> init (n, 0);
        vector<int> diff = getDiff(init);
        for (auto booking : bookings) {
            increment(diff, booking[0]-1, booking[1]-1, booking[2]);
        }
        return reconstruct(diff);
    }
};
