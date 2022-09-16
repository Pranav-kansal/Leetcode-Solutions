class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int sum=0;
        if(k>arr.size())
        {
            return 0;
        }
        for(int i=0;i<k;i++)
        {
            sum+=arr[i];
        }
        int res=sum;
        int end=arr.size()-1;
        for(int i=k-1;i>=0;i--)
        {
            res-=arr[i];
            res+=arr[end];
            end--;
            sum=max(sum,res);
            
        }
        return sum;
    }
};