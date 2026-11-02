class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        int maxProfit=0;
        int minimum=prices[0];
        for(int i=0;i<n;i++){
            int difference=prices[i]-minimum;
            if(difference>maxProfit){
                maxProfit= difference;
            }
            if(prices[i]<minimum){
                minimum=prices[i];
            }
        }
        return maxProfit;
    }
};