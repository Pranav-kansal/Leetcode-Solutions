class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string str1;
        for(int i=0;i<s.length();i++)
        {
            if(isalnum(s[i]))
            {
                str1 += s[i];
            }
        }
        cout<< str1<<endl;
         string str2;
            for(int i= str1.length()-1;i>=0;i--)
            {
                str2 += str1[i];
            }
        cout<< str2<<endl;
        if(str2 == str1)
            {
                return true;
            }
            else
                return false;
    }
};