class Solution {
public:
int titleToNumber(string columnTitle) {
int n = columnTitle.length();
int power = n-1;
int ans = 0;
for(int i=0 ; i<n ; i++)
{
int ch = columnTitle[i]-64;
ans += (pow(26,power--)*ch);
}
return ans;
}
};