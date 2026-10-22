class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;

        int sellMax = 0, buy = 0;
        for (int i = 0; i < n; i++) {
            buy = prices[i];
            for (int j = i + 1; j < n; j++) {
                sellMax = max(sellMax, prices[j] - buy);
            }
        }

        return sellMax;
    }
};
