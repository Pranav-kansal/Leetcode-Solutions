
class Solution {
public:
    int beautySum(string s){ int sum=0;    
for(int i=0;i<s.length();i++){ 
  unordered_map<char,int> m; 
   for(int j=i;j<s.length();j++){
          m[s[j]]++;  
            
int mini=INT_MAX,maxi=INT_MIN;
            
    for(auto it:m){    
        if(it.second>maxi) maxi=it.second;
        if(it.second<mini) mini=it.second;
        }
            sum+=maxi-mini;
        }
        } 
        return sum;
    }
};