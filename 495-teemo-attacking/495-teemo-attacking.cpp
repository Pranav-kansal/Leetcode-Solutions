class Solution {
public:
    int findPoisonedDuration(vector<int>& time, int duration) {
        int totaltime=0;
        for(int i=1;i<time.size();i++){
            if(time[i-1]+duration<time[i])
                totaltime+=duration;
            else
                totaltime+=(time[i]-time[i-1]);

        }
        return (totaltime+=duration);
    }
	
};