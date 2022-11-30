class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
           mp[arr[i]]++; 
        }
        unordered_set<int> s;
        for(auto it:mp)
        {
            if(find(s.begin(),s.end(),it.second)!=s.end())
            {
                cout<<it.second<<" ";
                return false;
            }
            else
            {
                s.insert(it.second);
            }
        }
        return true;
    }
};