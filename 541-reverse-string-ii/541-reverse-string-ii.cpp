class Solution {
public:
    string reverseStr(string s, int k) {
        int i=0;
        int c=0;
        while(i<=s.length())
        {
            if(c!=2*k && i!=s.length())
            {
                c++;
                i++;
            }
            else
            {
                if(c<=2*k && c>=k)
                {
                    reverse(s.begin() + i -c,s.begin() + i -c+k);
                }
                else
                    reverse(s.begin() + i - c,s.begin() + i);
                i++;
                c=1;
            }
        }
        return s;
    }
};