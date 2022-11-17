class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int ar1 = abs(ax2 - ax1)*abs(ay2-ay1);
        int ar2 = abs(bx2 - bx1)*abs(by2-by1);
        if(bx1<ax2 && bx2>ax1 && by2>ay1 && by1<ay2)
        {
            int x1 = max(ax1,bx1);
            int x2 = min(ax2,bx2);
            int y1 = max(ay1,by1);
            int y2 = min(ay2,by2);
            int common = abs(x1-x2)*abs(y1-y2);
            return ar1+ar2-common;
        }
        else
            return ar1 + ar2;
        
    }
};