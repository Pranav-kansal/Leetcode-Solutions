class Solution {
public:
    int lengthOfLastWord(string s) {
        int start = 0;
        int end = s.length()-1;
        int i=0;
        while(end >= 0)
        {
            if(s[end]==' ')
            {
                end--;
            }
            else
                break;
        }
        while(i<end)
        {
            if(s[i] == ' ') 
            {
                start = i+1;
            }
            i++;
        }
        return end - start +1;
    }
};