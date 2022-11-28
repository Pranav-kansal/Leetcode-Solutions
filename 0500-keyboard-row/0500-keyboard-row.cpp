class Solution {
public:
    bool helper(string word,string temp)
    {
        bool ans = false;
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        for(int i=0;i<word.size();i++)
        {
            for(int j=0;j<temp.size();j++)
            {
                if(word[i]==temp[j])
                {
                    ans = true;
                    break;
                }
                else
                {
                    ans = false;
                }
            }
            if(ans == false)return false;
        }
        return ans;
    }
    vector<string> findWords(vector<string>& words) {
        string first = "qwertyuiop";
        string second = "asdfghjkl";
        string third = "zxcvbnm";
        vector<string> ans;
        for(int i=0;i<words.size();i++)
        {
            if(helper(words[i],first)==true)ans.push_back(words[i]);
            else if(helper(words[i],second)==true)ans.push_back(words[i]);
            else if(helper(words[i],third)==true)ans.push_back(words[i]);
        }
        return ans;
    }
};