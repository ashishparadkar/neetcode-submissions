class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int buyDay = 0, sellDay = 1, maxP = 0;

        while (sellDay < prices.size()) {
            if (prices[sellDay] > prices[buyDay]) {
                maxP = max(maxP, prices[sellDay] - prices[buyDay]);
            } else {
                buyDay = sellDay;
            }

            sellDay++;
        }
        return maxP;
    }
};
