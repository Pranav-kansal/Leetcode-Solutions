class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> stack;
        int count=0;
        int  Max = 0;
        stack.push(-1);
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                stack.push(i);
            }
            else
            {
                stack.pop();
                if(stack.empty())
                {
                    stack.push(i);
                }
                else
                  count = max(count,i-stack.top());
            }
            
        }
        
       return count; 
    }
};