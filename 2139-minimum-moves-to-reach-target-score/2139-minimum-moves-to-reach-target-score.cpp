class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int count =0;
        if(maxDoubles==0)return target -1;
        while(target/2>=1 && maxDoubles>0)
        {
            cout<<target<<" ";
            if(target%2==0)
            {
                target = target /2;
                count++;
                maxDoubles--;
            }
            else
            {
                target =target/2;
                count+=2;
                maxDoubles--;
            }
        }
        cout<<count<<" ";
        return count + target - 1;
    }
};