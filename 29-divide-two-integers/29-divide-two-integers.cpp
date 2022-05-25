class Solution {
public:
    int divide(int divd, int div) {
        
        if(divd==INT_MIN && div==-1)
            return INT_MAX;
        
        bool sign =(divd<0==div<0);
        
        long dividend = abs(divd);
        long  divisor = abs(div);

        long ans=0;
        
        while(dividend>=divisor)
        {
            long quotient=1;
            long divisor2=divisor;
            while(dividend>=(divisor2<<1))
            {
                divisor2=(divisor2<<1);
                quotient=quotient<<1;
                
            }
            ans+=quotient;   
            dividend-=divisor2;
            
        }
        if(!sign)
                  return ans*-1;
        else
                  return ans;
        
    }
};