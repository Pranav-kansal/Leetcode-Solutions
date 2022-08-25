class Solution {
    void combination(vector<int>& candidates,int target,vector<int>& comb,int currsum,int index,vector<vector<int>>& ans)
    {
        if(currsum>target)return;
        else if(currsum == target)
        {
            if(find(ans.begin(),ans.end(),comb)==ans.end())
            {
              ans.push_back(comb);   
            }
            return;
        }
        
        for(int i=index;i<candidates.size();i++)
        {
            if(i > index && candidates[i] == candidates[i-1]) continue;
            comb.push_back(candidates[i]);
            currsum += candidates[i];
            combination(candidates,target,comb,currsum,i+1,ans);
            comb.pop_back();
            currsum -= candidates[i];
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
       vector<int> comb;
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        combination(candidates,target,comb,0,0,ans);
        return ans;
    }
};