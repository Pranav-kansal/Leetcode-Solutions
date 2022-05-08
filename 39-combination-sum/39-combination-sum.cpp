class Solution {
    void combination(vector<int>& candidates,int target,vector<int>& comb,int currsum,int index,vector<vector<int>>& ans)
    {
        if(currsum>target)return;
        else if(currsum == target)
        {
            ans.push_back(comb);
            return;
        }
        
        for(int i=index;i<candidates.size();i++)
        {
            comb.push_back(candidates[i]);
            currsum += candidates[i];
            combination(candidates,target,comb,currsum,i,ans);
            comb.pop_back();
            currsum -= candidates[i];
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<int> comb;
        vector<vector<int>> ans;
        combination(candidates,target,comb,0,0,ans);
        return ans;
    }
};