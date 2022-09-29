class Solution {
public:
    
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        queue<pair<int,int>> q;
        int low = 0;
        int high = arr.size() - 1;
        int index = 0; 
        int j=0;
        vector<int> res(k);
        if(x<=arr[low])
        {
            for(int i=0;i<k;i++)
            {
                res[i]=arr[i];
            }
        }
        else if(x>=arr[high])
        {
            for(int i=arr.size()-k;i<arr.size();i++)
            {
                res[j++] = arr[i];
            }
        }
        else
        {
            int l=0;
            int h=0;
            int index = lower_bound(arr.begin(),arr.end(),x)-arr.begin();
            cout<<index;
            if(index<k)
            {
                l=0;
                h=k;
            }
            else
            {
                l = index - k;
                h = index;
                
            }
            while(abs(arr[h]-x)<abs(arr[l]-x))
                {
                    l++;
                    h++;
                }
                
                for(int i=l;i<h;i++)
                {
                    res[j++]=arr[i];
                }
        }
        return res;
    }
};