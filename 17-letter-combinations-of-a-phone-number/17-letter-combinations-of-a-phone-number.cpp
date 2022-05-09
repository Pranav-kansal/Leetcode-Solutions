class Solution {
public:
    void myletterCombination(string digits,vector<string>&res,string nums[],string s,int i)
    {
        if(i==digits.length())
        {
            res.push_back(s);
            return;
        }
        string val = nums[digits[i]-'0'];
        for(int j=0;j<val.length();j++)
        {
            myletterCombination(digits,res,nums,s + val[j],i+1);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.length()==0)
            return res;
        string nums[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        myletterCombination(digits,res,nums,"",0);
        return res;
    }
};