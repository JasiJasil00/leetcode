class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int profit= 0 ;
        for(int price : prices){
            if(min > price){
                min = price;
            }else if(price - min > profit){
                profit= price - min;
            }
        }
        return profit;
    }
};