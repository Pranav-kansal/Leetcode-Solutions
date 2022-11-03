class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        vector<vector<int>>counter(26,vector<int>(26,0));
        string x = "";
        int count=0;
        for(int i=0;i<words.size();i++)
        {
            x = words[i];
            int a = x[0] - 'a';
            int b = x[1] - 'a';
            if(counter[b][a])
            {
                count+=4;
                cout<<count<<endl;
                counter[b][a]--;
            }
            else
                counter[a][b]++;
        }
        for(int i=0;i<26;i++)
        {
            if(counter[i][i])
            {
                return count+2;
            }
        }
        return count;
    }
};