class Solution {
public:
    bool pallindrome(string s)
    {
        string temp = s;
        reverse(s.begin(),s.end());
        if(temp == s)
        {
            return true;
        }
        return false;
    }
    void helper(string &s,int index,vector<vector<string>>& res,vector<string>& temp)
    {
       if(index == s.size())
       {
           res.push_back(temp);
           return;
       }
        for(int i=index;i<s.size();i++)
        {
            string t = s.substr(index,i-index+1);
            if(pallindrome(t))
            {
                temp.push_back(t);
                helper(s,i+1,res,temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> temp;
        vector<vector<string>> res;
        if(!s.size())
        {
            return res;
        }
        helper(s,0,res,temp);
        return res;
    }
};