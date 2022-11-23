class Solution {
public:
    bool wordPattern(string p, string s) {
        map<char,string> mp;
        map<string,char> ms;
        int j=0;
        for(int i=0;i<p.size();i++){
            string temp="";
            while(j<s.size() && s[j]!=' '){   
                temp+=s[j++];
            }
            j++;                               
            if(temp.empty()||(mp.find(p[i])!=mp.end()||ms.find(temp)!=ms.end()) && (mp[p[i]]!=temp|| ms[temp]!=p[i])) 
                return false;
            mp[p[i]]=temp;
            ms[temp]=p[i];
            temp="";                           
        }
        if(j-1<s.size()) return false;        
        
        return true;
    }
};