class Solution {
public:
static bool comp(pair<int,int>p,pair<int,int>q)
  {
  if(p.first==q.first)
  {
  return p.second>q.second;
  }
  return p.first<q.first;
  }
    vector<int> frequencySort(vector<int>& nums)
    {
        map<int,int> m;
        for(auto it:nums)
        {
            m[it]++;
        }
        vector<pair<int,int>> v;
        for(auto it:m)
        {
           v.push_back({it.second,it.first});     
        }
        vector<int> ans;int cnt=0;
        sort(v.begin(),v.end(),comp);
        for(auto it: v)
        {  
            cnt=it.first;
            while(cnt--)
            {
                ans.push_back(it.second);
            }

        }return ans;
    }
};