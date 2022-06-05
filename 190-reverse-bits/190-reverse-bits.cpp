class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int i , k ;
        unsigned long int num = 0;
        for(i=31;i>=0;i--)
        {
            k = n&1;
            num += k*pow(2,i);
            n = n>>1;
        }
        return num;
    }
};