class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multiset<int> s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        for(auto &value : s)
        {
            cout<<value<<" ";
        }
        multiset<int>::iterator it = s.begin();
        advance(it,s.size() - k);
        return *it;
    }
};