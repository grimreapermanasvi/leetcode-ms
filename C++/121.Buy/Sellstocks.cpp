//Optimal Solution//
/*class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int maxprofit=0;
        for(int i=0;i<prices.size();i++)
        {
            int cost=prices[i]-mini;
            maxprofit=max(maxprofit,cost);
            mini=min(mini,prices[i]);
        }
        return maxprofit;
    }
};*/