class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        string str="";
        string word = "";
        while(i<=s.length())
        {
            if(s[i]!=' ' && i!=s.length())
            {
                word+=s[i++];
            }
            else
            {
                reverse(word.begin(),word.end());
                str += word;
                if(i!=s.length())
                {
                    str += " ";
                }
                i++;
                word = "";
            }
        }
        
        reverse(word.begin(),word.end());
        str += word;
        return str;
    }
};