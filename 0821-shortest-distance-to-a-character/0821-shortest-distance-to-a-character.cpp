class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.length();
        stack<int> st;
        vector<int> res(n,0);
        for(int i=0;i<n;i++)
        {
            if(s[i]==c)
            {
                st.push(i);
            }
        }
        int last = INT_MAX;
        int i = n-1;
        while(i>=0)
        {
            cout<<last<<" ";
            res[i] = min(abs(i-st.top()),abs(i-last));
            if(st.size()>1 && i==st.top())
            {
                last = st.top();
                st.pop();
            }
            i--;
        }
        return res;
        
    }
};