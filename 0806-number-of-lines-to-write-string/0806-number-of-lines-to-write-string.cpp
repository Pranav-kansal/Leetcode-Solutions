class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
    int cnt=1, currSum=0;
    
    for (int i=0;i<s.size();i++) {
        currSum += widths[s[i]-'a'];
        if(currSum > 100) {
            currSum = widths[s[i]-'a'];
            cnt++;
        }
    }
    
    return {cnt,currSum};
}
};