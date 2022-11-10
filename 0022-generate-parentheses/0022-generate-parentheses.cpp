class Solution {
public:
    vector<string> ans;
    void solve(string &temp,int fb,int sb,int mx)
    {
        if(temp.size() == 2*mx)
        {
            ans.push_back(temp);
            return;
        }
        if(fb<mx)
        {
            temp.push_back('(');
            solve(temp,fb+1,sb,mx);
            temp.pop_back();
        }
        if(sb<fb)
        {
            temp.push_back(')');
            solve(temp,fb,sb+1,mx);
            temp.pop_back();
        }
        
    }
    vector<string> generateParenthesis(int n) {
        string temp;
        solve(temp,0,0,n);
        return ans;
    }
};
