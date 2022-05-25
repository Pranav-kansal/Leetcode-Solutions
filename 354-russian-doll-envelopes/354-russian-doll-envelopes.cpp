class Solution {
public:
    static bool sortcol(const vector<int>& v1,const vector<int>& v2)
    {
        if(v1[0] == v2[0])
            return v1[1]>v2[1];
        return v2[0]>v1[0];
    }
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        int smallest =0;
        int count =1;
        sort(envelopes.begin(),envelopes.end(),sortcol);
        vector<int> v;
        for(auto i:envelopes)
        {
            auto it = lower_bound(v.begin(),v.end(),i[1]);
            if(it == v.end())
            {
                v.push_back(i[1]);
            }
            else
            {
                *it = i[1];
            }
        }
        return v.size();
    }
};