#include<bits/stdc++.h>
class Solution {
public:
    void nextpermutations(vector<int>& nums,vector<vector<int>>& res,int k)
    {
        while(k>0)
        {
            int index1;
            int index2;
            int i=nums.size()-2;
            while(i>=0)
            {
                if(nums[i]<nums[i+1])
                {
                    break;
                }
                else
                    i--;
            }
            
            index1=i;
            if(i<0)
            {
                reverse(nums.begin(),nums.end());
                res.push_back(nums);
                k--;
            }
            else
            {
                i=nums.size()-1;
                while(i>=0)
                {
                    if(nums[i]>nums[index1])
                    {
                        break;
                    }
                    else
                        i--;
                }
                index2=i;
                swap(nums[index1],nums[index2]);
                sort(nums.begin()+index1+1,nums.end());
                res.push_back(nums);
                k--;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        res.push_back(nums);
        int k=1;
        for(int i=nums.size();i>0;i--)
        {
            k=k*i;
        }
        nextpermutations(nums,res,k-1);
        return res;
    }
};