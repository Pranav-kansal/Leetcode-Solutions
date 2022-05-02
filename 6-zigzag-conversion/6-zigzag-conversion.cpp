class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || s.length()<numRows)return s;
       int k;
        string result = "";
        for(int i=0;i<numRows;i++)
        {
            result += s[i];
            if(i==0 || i==numRows-1)
            {
                int j=i;
                int k= (numRows - 1)*2;
                while(j+k<s.length())
                {
                    j+=k;
                    result += s[j];
                }
            }
            else
            {
                k=(numRows - 1 - i);
                int j=i;
            
                while(j+2*k<s.length())
                {
                    j=j+k*2;
                result +=s[j];
                k= numRows - 1- k;
                }
            }
            
        }
        return result;
    }
};