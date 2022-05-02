class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,j=nums.size()-1;
        int f=0;
        if(nums.size()==0)
        {
            return 0;
        }
        while(i<j)
        {
            if(nums[i]==val)
            {
                if(nums[j]!=val)
                {
                    f++;
                    swap(nums[i],nums[j]);
                    i++;
                    j--;
                }
                else
                {
                    j--;
                }
            }
            else
                i++;
        }
        i=0;
        while(i<nums.size())
        {
            if(nums[i]!=val)
            {
                i++;
            }
            else
                break;
        }
        return i;
    }
};