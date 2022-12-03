class Solution {
public:
    static bool comp(pair<char,int> &a,pair<char,int> &b)
    {
        if(a.second>b.second)
        {
            return true;
        }
        return false;
    }
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        vector<pair<char,int>> temp;
        for(auto it:mp)
        {
            temp.push_back(it);
        }
        sort(temp.begin(),temp.end(),comp);
        string res;
        for(auto it:temp)
        {
            int i=it.second;
            while(i>0)
            {
                res.push_back(it.first);
                i--;
            }
        }
        return res;
    }
};