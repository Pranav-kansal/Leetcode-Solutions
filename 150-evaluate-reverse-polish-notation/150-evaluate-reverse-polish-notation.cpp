#include<bits/stdc++.h>
#include<string>

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long> st;
        vector<string> operators = {"+","-","/","*"};
        int n = tokens.size();
        for(int i = 0;i<n;i++)
        {
            if(find(operators.begin(),operators.end(),tokens[i])!=operators.end())
            {
                long a  = st.top();
                st.pop();
                long b  = st.top();
                st.pop();
                long c;
                if(tokens[i]=="+")
                {
                  c = a + b;
                    
                }
                else if(tokens[i]=="-")
                {
                   c = b-a; 
                }
                else if(tokens[i]=="/")
                {
                    c = b/a;
                }
                else 
                    c= b*a;
                st.push(c);
            }
            else
            {
                st.push(stoi(tokens[i]));
            }
        }
        int ans = st.top();
       return ans; 
    }
};