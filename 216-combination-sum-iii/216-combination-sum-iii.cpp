class Solution {
public:
    void combinationSum(int k,int n,vector<int>& combination,vector<vector<int>>& res,int i,int sum,int count)
    {
        if(count == k && sum == n)
        {
            res.push_back(combination);
            return;
        }
        if(count == k)
        {
            return;
        }
        for(int j=i;j<=9;j++)
        {
            combination.push_back(j);
            sum += j;
            count++;
            combinationSum(k,n,combination,res,j+1,sum,count);
            combination.pop_back();
            sum -= j;
            count--;
            cout<<j<<" ";
        }
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> combination;
        vector<vector<int>> res;
        combinationSum(k,n,combination,res,1,0,0);
        return res;
    }
};