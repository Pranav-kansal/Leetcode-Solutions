class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        int i=0, pre=-1;
        while(s[i]!=NULL){
            if(s[i]=='#' && i==0){
                s.erase(i,1);
            }else if(s[i]=='#'){
                s.erase(pre, 2);
                pre--;
                i--;
            }else{
                pre=i;
                i++;
            }
            
        }
        
        i=0, pre=-1;
        while(t[i]!=NULL){
            if(t[i]=='#' && i==0){
                t.erase(i,1);
            }else if(t[i]=='#'){
                t.erase(pre, 2);
                pre--;
                i--;
            }else{
                pre=i;
                i++;
            }
            
        }
        
        if(s.length()!=t.length()) return false;
        for(int i=0;i<s.length();i++){
            if(s[i]!=t[i]) return false;
        }
        
        return true;
    }
};