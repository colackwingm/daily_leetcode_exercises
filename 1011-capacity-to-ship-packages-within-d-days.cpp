class Solution {
public:
    int needDays(vector<int>& weights, int w) {
        int day = 1;
        int cap = w;
        for (auto weight : weights) {
            if (cap >= weight) {
                cap -= weight;
            } else {
                cap = w - weight;
                day += 1;
            }
        }
        return day;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(), weights.end());
        int r = 0;
        for (auto weight : weights) {
            r += weight;
        }
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (needDays(weights, mid) <= days) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return l;
    }
};
