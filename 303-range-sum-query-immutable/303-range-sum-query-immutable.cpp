class NumArray {
public:
    vector<int> temp;
    NumArray(vector<int>& nums) {
        for(int i=1;i<nums.size();i++)
        {
            nums[i] += nums[i-1]; 
        }
        temp = nums;
    }
    
    int sumRange(int left, int right) {
        int sum = temp[right];
        int extra;
        if(left == 0)
        {
            extra = 0;
        }
        else
            extra = temp[left-1];
        return sum - extra;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */