class Solution {
public:
bool checkIfPangram(string sentence) {

    set<char>s;
    for(auto x:sentence)
    {
        s.insert(x);
    }
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    int n = s.size();
    if(n==26)
        return 1;
    else
    return 0;
}
};