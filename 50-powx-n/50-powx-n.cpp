class Solution {
public:
    double myPow(double x, int n) {
        if(n<0)
        {
            return myPow(1/x,abs(n));
        }
        else
        {
            if(n==0)
            {
                return 1;
            }
            else if (n==1)
            {
                return x;
            }
            double val = myPow(x,n/2);
            if(n%2==1)
            {
                return val*val*x;
            }
            else
            {
                return val*val;
            }
        }
    }
};