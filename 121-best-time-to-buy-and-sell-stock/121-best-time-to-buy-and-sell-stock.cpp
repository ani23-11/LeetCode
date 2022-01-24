class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
    int c=INT_MAX,r=0;
    for (int i=0; i<prices.size(); i++)
        {
        r=max(r,prices[i]-c);
        c=min(c, prices[i]);
        }
    return r;
    }
};