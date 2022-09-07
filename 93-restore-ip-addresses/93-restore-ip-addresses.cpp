class Solution {
public:
    bool isValid(string str)
    {
        if(str.size()>3)return false;
        if(str[0]=='0' && str.size()>1)return false;
        int number = stoi(str);
        if(number>=0 && number<=255)return true;
        return false;
    }
    void helper(string str,vector<string>& ans)
    {
        for(int i=1;i<=3 && i<str.size();i++)
        {
            string first = str.substr(0,i);
            if(isValid(first))
            {
                string second;
                for(int j=1;j<=3 && i+j<str.size();j++)
                {
                    second = str.substr(i,j);
                    if(isValid(second))
                    {
                        string third;
                        string fourth;
                        for(int k=1;k<=3 && i+j+k<str.size();k++)
                        {
                            third = str.substr(i+j,k);
                            fourth=str.substr(i+j+k);
                            if(isValid(third) && isValid(fourth))
                            {
                                string s;
                                s=first+ "." + second + "." + third + "." + fourth;
                                ans.push_back(s);
                            }
                        }
                    }
                }
            }
        }
    }
    vector<string> restoreIpAddresses(string s) {
        vector<string> ans;
        helper(s,ans);
        return ans;
    }
};