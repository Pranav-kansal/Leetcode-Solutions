class Solution {
public:
    string toGoatLatin(string sentence) {
        vector<string> words;
        string temp;
        for(int i=0;i<sentence.length();i++)
        {
            if(sentence[i]==' ')
            {
                words.push_back(temp);
                 temp = "";
            }
            else
            {
                temp.push_back(sentence[i]);
            }
        }
        words.push_back(temp);
        int k=1;
        string res = "";
        for(auto &it : words)
        {
            char c = tolower(it[0]);
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            {
                it = it + "ma";
            }
            else
            {
                string t = it.substr(1,it.length()-1);
                t.push_back(it[0]);
                t += "ma";
                it = t;
            }
            for(int i = k;i>0;i--)
            {
                it.push_back('a');
            }
            k++;
            res += it + " ";
        }
        res.pop_back();
        return res;
    }
};