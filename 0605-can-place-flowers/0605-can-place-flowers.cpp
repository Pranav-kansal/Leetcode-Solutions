class Solution {
public:
    bool canPlaceFlowers(vector<int>& v, int n) {
        int m=v.size();
        v.push_back(0);//to handle case of 2 zeros at end and start we add more zeros to make triplet of zeros
        v.insert(v.begin(),0);
        for(int i=1;i<m+1;i++)//our array now has m+2 elements so for 1 to m we iterate
        {
            if(v[i-1]==0 and v[i]==0 and v[i+1]==0)
            {
                n--;
                v[i]=1;//mark that position planted
            }
        }
        return n<=0;
    }
};