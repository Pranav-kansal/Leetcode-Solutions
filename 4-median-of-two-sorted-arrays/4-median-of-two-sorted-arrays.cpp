class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v3;
        int i=0;
        int j=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<nums2[j])
            {
                v3.push_back(nums1[i]);
                i++;
            }
            else
            {
                v3.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size())
        {
            v3.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size())
        {
            v3.push_back(nums2[j]);
            j++;
        }
        sort(v3.begin(),v3.end());
        int sum = nums1.size()+nums2.size();
        if(sum%2==0)
        {
            return (v3[(sum/2)-1] + v3[(sum)/2])/2.0;
        }
        else
            return v3[sum/2];
        
    }
};