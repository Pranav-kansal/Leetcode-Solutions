class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length()==1)
            return s;
        int n= s.length();
        int length = 0;
        int max_length=0;
        int l=0,r=0;
        int end=0,start = 0;
        //odd length
        for(int i=0;i<n-1;i++)
        {
            l=i;
            r=i;
            while(l>=0 && r<=n-1)
            {
                if(s[l]==s[r])
                {
                    l--;
                    r++;
                }
                else
                    break;
            }
            length=r-l-1;
            if(length>max_length)
            {
                max_length = length;
                start = l+1;
                end=r-1;
            }
        }
        //even Length
        for(int i=0;i<s.length();i++)
        {
            l=i;
            r=i+1;
            while(l>=0 && r<=n-1)
            {
                if(s[l]==s[r])
                {
                    l--;
                    r++;
                }
                else
                    break;
            }
            length=r-l-1;
            if(length>max_length)
            {
                max_length = length;
                start = l+1;
                end=r-1;
            }
        }
        string str =  s.substr(start,max_length);
        return str;
    }
};