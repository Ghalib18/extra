class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<bool>vis(n,false);
        int cnt=0;
        for(int i=0;i<n;i++){
            int c=arr[i][0];
            int d=arr[i][1];
            for(int j=0;j<n;j++){
                if(i==j) continue;
                int a=arr[j][0];
                int b=arr[j][1];
                if(c<=a&&b<=d&&!vis[j]){
                    cnt++;
                    vis[j]=true;
                }
            }
        }
        return n-cnt;
    }
};