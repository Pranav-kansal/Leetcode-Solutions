class Solution {
public:
    vector<int> temp1,temp2;
    Solution(vector<int>& nums) {
        temp1.assign(nums.begin(),nums.end());
        temp2.assign(nums.begin(),nums.end());
    }
    
    vector<int> reset() {
        return temp1;
    }
    
    vector<int> shuffle() {
        int i = temp2.size()-2;
        int index1 = i;
        while(i>=0 )
        {
            if(temp2[i]<temp2[i+1])
            {
                break;
            }
            else
            {
                i--;
            }
        }
        index1 = i;
        if(i<0)
        {
            reverse(temp2.begin(),temp2.end());
        }
        else
        {
            i= temp2.size()-1;
            while(i>=0)
            {
                if(temp2[i]>temp2[index1])
                {
                    break;
                }
                else
                    i--;
            }
            int index2 = i;
            swap(temp2[index1],temp2[index2]);
            sort(temp2.begin()+index1+1,temp2.end());
        }
            return temp2;
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */