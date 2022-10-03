class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans =0;
        for(int i=0;i<colors.length();i)
        {
            int mx = neededTime[i];
            int mxindex = i;
            int j= i;
            while(j<colors.length() && colors[i]==colors[j])
            {
                if(neededTime[j]>mx)
                {
                    mx= neededTime[j];
                    mxindex = j;
                }
                j++;
            }
            int sum = 0;
            for(int k=i;k<j;k++)
            {
                if(k!=mxindex)
                {
                    sum += neededTime[k];
                }
            }
            ans += sum;
            i=j;
        }
        return ans;
    }
};