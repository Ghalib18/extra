class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& pts) {
        int  n= pts.size();
        int ans=0;
        for(int i=1;i<n;i++){
            int x=abs(pts[i][0]-pts[i-1][0]);
            int y=abs(pts[i][1]-pts[i-1][1]);
            ans+=max(y,x);
        }
        return ans;
    }
};