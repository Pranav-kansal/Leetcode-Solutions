class Solution {
public:
    int commonFactors(int a, int b) {
        int x = min(a,b);
        int count=0;
        for(int i=1;i<=x/2;i++)
        {
            if(a%i==0 && b%i==0)
            {
                count++;
            }
        }
        if((a+b-x)%x==0)
        {
            count++;
        }
        return count;
    }
};