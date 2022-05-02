class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        while(i<s.size())
        {
            if(s[i]==' ')
            {
                 i++;
            }
            else
            {
                break;
            }
        }
        if(i>s.size())
        {
             return 0;
        }
        int sign=1;
        if(s[i]=='+'||s[i]=='-')
        {
           sign=s[i]=='+'?1:-1;
            i++;
        }
        int ans=0;
        for(;i<s.size()&&s[i]>='0'&&s[i]<='9';i++)
        {  int val=(s[i]-'0');
            if(ans>((INT_MAX-val)/10))
            {
                if(sign==-1)
                {
                    return INT_MIN;
                }
                else
                {
                    return INT_MAX;
               }
                 }
        ans=ans*10+val;
        }
        return sign*ans;
    }
};