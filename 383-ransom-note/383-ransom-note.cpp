class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> map;
        for(int i=0;i<magazine.length();i++)
        {
            if(map.count(magazine[i])==0)
            {
                map[magazine[i]]=1;
            }
            else
            {
                map[magazine[i]]++;
            }
        }
        for(int i=0;i<ransomNote.length();i++)
        {
            if(map[ransomNote[i]])
            {
                map[ransomNote[i]]--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};