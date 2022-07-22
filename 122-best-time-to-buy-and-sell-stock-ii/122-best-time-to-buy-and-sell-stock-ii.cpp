class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int f=0,b=prices[0],mp=0;
        for(int i=0;i<prices.size();i++)
        {
            if(f==1)
            {
                mp = mp + prices[i]-b;
                f=0;
            }
                if(i==prices.size()-1 || prices[i]<prices[i+1])
                {
                    b=prices[i];
                    f=1;
                }
        }
        return mp;
    }
};