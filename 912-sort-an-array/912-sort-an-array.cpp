class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
    void mergeSort(vector<int>& nums, int l, int r){
        if(l >= r) return;
        int m = l + (r - l) / 2;
        mergeSort(nums, l, m);
        mergeSort(nums, m + 1, r);
        vector<int> temp;
        int p = l, q = m + 1;
        while(p <= m && q <= r){
            if(nums[p] < nums[q]) temp.push_back(nums[p++]);
            else temp.push_back(nums[q++]);
        }
        while(p <= m) temp.push_back(nums[p++]);
        while(q <= r) temp.push_back(nums[q++]);
        for(int i = l; i <= r; ++i){
            nums[i] = temp[i - l];
        }
    }
};