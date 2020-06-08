class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cost_price = INT_MAX;
        int profit = 0;
        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < cost_price)
                cost_price = prices[i];
            else {
                if(i == prices.size() - 1 || prices[i] > prices[i + 1]) {
                    profit += prices[i] - cost_price;
                    cost_price = INT_MAX;
                }
                else {
                    continue;
                }
            }
        }
        return profit;
    }
};
