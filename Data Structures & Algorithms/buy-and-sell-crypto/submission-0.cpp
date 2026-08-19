class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // get max value at right and check the max profit

        int maxValue = prices[prices.size()-1], profit = 0;

        for(int i=prices.size()-2; i>=0 ; i--){
            if (prices[i] > maxValue){
                maxValue = prices[i];
            }else{
                int currentProfit = maxValue - prices[i];
                if (currentProfit > profit){
                    profit = currentProfit;
                }
            }
        }

        return profit;
    }
};
