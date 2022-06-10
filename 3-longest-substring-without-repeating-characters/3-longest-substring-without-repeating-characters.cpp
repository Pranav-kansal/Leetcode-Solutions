class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> myset; 
        int maxi = 0;
        int start = 0, end = 0;
        
        while(start<s.size())
        {
            auto it = myset.find(s[start]); //searching whether element is present in set
            if(it==myset.end()) //if not present
            {
                if(start-end+1>maxi) //update max length if current length is maximum
                {
                    maxi = start-end+1;
                }
                myset.insert(s[start]); //insert element into set
                start++;
            }   
            else // if element is present in set, remove it
            {
                myset.erase(s[end]);
                end++;
            }
        }
        
        return maxi;
    }
};