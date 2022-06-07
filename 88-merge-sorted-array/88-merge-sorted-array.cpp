class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int fp=m-1,sp=n-1,cp=m+n-1;
        while(sp>=0)
        {
            if(fp<0 || nums2[sp]>nums1[fp])
            {
                nums1[cp]=nums2[sp--];
            }
            else
            {
                nums1[cp]=nums1[fp--];
            }
            cp--;
        }
    }
};