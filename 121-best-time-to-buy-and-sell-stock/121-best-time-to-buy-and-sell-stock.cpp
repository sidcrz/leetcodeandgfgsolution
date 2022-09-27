
class Solution 
{
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minprice=INT_MAX;
        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            minprice=min(minprice,prices[i]);
            maxprofit=max(maxprofit,prices[i]-minprice);
        }
        return maxprofit;
    }
};