class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health){
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> dist(n,vector<int>(m,-1e7));
        queue<pair<int,int>> qt;
        qt.push({0,0});
        if(grid[0][0]==1) dist[0][0]=health-1;
        else dist[0][0]=health;
        vector<int> drow={-1,0,1,0};
        vector<int> dcol={0,1,0,-1};
         while(qt.size()){
            int row=qt.front().first;
            int col=qt.front().second;
            qt.pop();
             for(int i=0;i<4;i++){
                int ro=row+drow[i];
                int co= col+dcol[i];
                 if(ro>=0&&ro<n&&co>=0&&co<m){
                    int nexth=(grid[ro][co]==1)?dist[row][col]-1:dist[row][col];
                    if(nexth > dist[ro][co] && nexth > 0){
                        dist[ro][co]=nexth;
                         qt.push({ro,co});
                         if(ro==n-1&&co==m-1)return true;
                 }
             }
         }
    }
    return (dist[n-1][m-1]>=1)?true:false;
    }
};