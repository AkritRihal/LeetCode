class Solution {
public:
    void profitmax(vector<int>& prices, int &buy, int&profit, int i){
        if(i>=prices.size()) return;

        if(prices[i]<buy){
            buy = prices[i];              
        }
        if((prices[i]-buy)>profit){
            profit = prices[i]-buy;
        }
        profitmax(prices, buy, profit , i+1);


    }
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int profit = INT_MIN;
        profitmax(prices, buy, profit , 0);
        return profit;
    }
};