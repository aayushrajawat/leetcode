class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minprice=prices[0];
        int maxprofit=0;
        for(int i=0;i<n;i++){
            if(minprice>prices[i])
                minprice=prices[i];
            else if(prices[i]-minprice>maxprofit)
                maxprofit=prices[i]-minprice;
        }
        return maxprofit;
    }
};