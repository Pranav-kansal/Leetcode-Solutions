class Solution {
public:
    bool vowel(char ch)
    {
        if(ch == 'A' || ch =='a' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch == 'u' || ch=='U')
        {
            return true;
        }
        else
            return false;
    }
    string reverseVowels(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<=j)
        {
            if(vowel(s[i]) && vowel(s[j]))
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(vowel(s[i]))
            {
                j--;
            }
            else if(vowel(s[j]))
                i++;
            else
            {
                i++;
                j--;
            }
        }
        return s;
    }
};