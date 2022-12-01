class Solution {
public:
    bool halvesAreAlike(string s) {
        int c1=0,c2=0;;
        int n = s.length();
        vector<char> v{'a','e','i','o','u','A','E','I','O','U'};
        for(int i=0;i<n/2;i++)
        {
            if(find(v.begin(),v.end(),s[i])!=v.end())
            {
                c1++;
            }
        }
        for(int i=n/2;i<n;i++)
        {
            if(find(v.begin(),v.end(),s[i])!=v.end())
            {
                c2++;
            }
        }
        if(c1!=c2)return false;
        return true;
    }
};