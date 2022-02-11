class Solution {
public:
    int totalTime(vector<int>& piles, int k) {
        int res = 0;
        for(auto pile : piles) {
            res += pile / k;
            if (pile % k) {
                res += 1;
            }
        }
        return res;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = 1e9;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (totalTime(piles, mid) == h) {
                r = mid - 1;
            } else if (totalTime(piles, mid) < h) {
                r = mid - 1;
            } else if (totalTime(piles, mid) > h) {
                l = mid + 1;
            }
        }
        return l;
    }
};
