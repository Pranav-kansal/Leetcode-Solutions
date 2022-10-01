class Solution {
public:
    int strStr(string h, string n) {
        if(h.length()<n.length())
            return -1;
        for(int i=0,j=0;i<h.length();i++)
            if(h[i]==n[0])
                if(h.substr(i,n.length())==n)
                    return i;
        return -1;
    }
};