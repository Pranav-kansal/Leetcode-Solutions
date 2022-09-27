class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string word = "";
        for(int i=0;i<=s.length();i++)
        {
            if(s[i]==' ' || i == s.length())
            {
                
                if(word!="")
                {
                    st.push(word);
                    word = "";
                }
            }
            else
            {
                word += s[i];
            }
        }
        int n = st.size();
        string str = "";
        while(n>0)
        {
            if(n!=1)
            {
                str += st.top() + " ";
                st.pop();
            }
            else
            {
                str += st.top();
                st.pop();
            }
            n--;
        }
        return str;
    }
};