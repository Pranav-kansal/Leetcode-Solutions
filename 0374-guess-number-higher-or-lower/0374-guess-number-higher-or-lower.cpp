/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l = 1;
        int u = n;
        while(l<=u)
        {
            int mid = l + (u-l)/2;
            
            int g = guess(mid);
            cout<<mid<<" "<<g;
            if(g == 0)
            {
                return mid;
            }
            else if(g == -1)
            {
                u = mid - 1;
            }
            else
                l = mid +1;
        }
        return n;
    }
};