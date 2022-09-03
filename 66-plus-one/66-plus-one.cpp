class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(),digits.end());
        int c=1;
        for(int i=0;i<digits.size();i++)
        {
            int num = (digits[i]+c);
            digits[i] = num%10;
            c=num/10;
        }
        if(c==1)
        {
            digits.push_back(c);
        }
        reverse(digits.begin(),digits.end());
        return digits;
    }
};