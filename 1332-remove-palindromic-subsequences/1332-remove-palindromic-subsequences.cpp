class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.size() == 0)return 0;
        string temp = s;
        reverse(s.begin(),s.end());
        if(s==temp)return 1;
        else
            return 2;
        
    }
};