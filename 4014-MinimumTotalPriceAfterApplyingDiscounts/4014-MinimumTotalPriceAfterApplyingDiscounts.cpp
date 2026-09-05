// Last updated: 05/09/2026, 10:06:11
class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(), prices.end(), greater<int>());
        sort(discounts.begin(), discounts.end(), greater<int>());
        int n = min(prices.size(), discounts.size());

        double ans = 0;

        for(int i = 0; i < n; i++){
            ans += prices[i] * (100 - discounts[i]) / 100.0;
        }
        for(int i = discounts.size(); i < prices.size(); i++){
            ans += prices[i];
        }
        return ans;
    }
};