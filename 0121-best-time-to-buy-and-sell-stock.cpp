class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = *max_element(prices.begin(), prices.end());
        int maxProfit = 0;
        for (auto price : prices) {
            minPrice = min(minPrice, price);
            maxProfit = max(maxProfit, price-minPrice);
        }
        return maxProfit;
    }
};
