class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s;
        for(int i=0;i<nums1.size();i++)
        {
            s.insert(nums1[i]);
        }
        vector<int> ans;
        for(auto i:s)
        {
            if(find(nums2.begin(),nums2.end(),i)!=nums2.end())
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};