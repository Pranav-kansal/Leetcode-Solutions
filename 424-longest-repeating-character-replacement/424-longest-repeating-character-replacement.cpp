class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int l=0,r=0,mx=0,len=0;
        while(r<s.size())
        {
            mp[s[r]]++;
            len++;
            mx = max(mx,mp[s[r]]);
            if(r-l+1-mx > k )
            {
                mp[s[l++]]--;
                len--;
            }
            r++;  
        }
        return  len;
    }
};