class Solution {
public:
    int digits(int curr)
    {
        int count=0;
        while(curr>0)
        {
            curr=curr/10;
            count++;
        }
        return count;
    }
    void helper(int n,int k,int curr,vector<int>& res)
    {
        if(digits(curr)==n)
        {
            res.push_back(curr);
            return;
        }
        for(int i=0;i<10;i++)
        {
            int last_digit = curr%10;
            if(abs(last_digit-i)==k)
            {
                helper(n,k,curr*10 + i,res);
            }
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> result;
        for(int i=1;i<=9;i++)
        {
            helper(n,k,i,result);
        }
        return result;
    }
};