class Solution {
public:
    bool isPerfectSquare(int num) {
        long long i=0;
        long long sq=0;
        while(i*i<=num)
        {
            i++;
        }
        sq = i-1;
        if(sq * sq == num)
        {
            return true;
        }
        return false;
    }
};