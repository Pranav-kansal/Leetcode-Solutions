// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1;
        int u = n;
        int mid = l+ (u - l)/2;
        int ans = mid;
        while(l<=u)
        {
            mid = l + (u - l)/2;
            if(isBadVersion(mid)==true)
            {
                u = mid - 1;
                ans = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        return ans;
    }
};