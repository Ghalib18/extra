class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        vis[0][0]=1;
        int i=0;
        int j=0;
        vector<int> ans;
        while(i<n&&j<m){
            vis[i][j]=1;
            if(grid[i][j]=='R'){
                j++;
                if((i>=0&&i<n&&j>=0&&j<m)&&(vis[i][j]==1)){
                    ans.push_back(i);
                    ans.push_back(j-1);
                    return ans;
                }
               
            }
            else if(grid[i][j]=='L'){
                j--;
                if((i>=0&&i<n&&j>=0&&j<m)&&(vis[i][j]==1)){
                    ans.push_back(i);
                    ans.push_back(j+1);
                    return ans;
                } 
            }
            else if(grid[i][j]=='D'){
                i++;
                if((i>=0&&i<n&&j>=0&&j<m)&&(vis[i][j]==1)){
                    ans.push_back(i-1);
                    ans.push_back(j);
                    return ans;
                }
            }
            else{
                i--;
                if((i>=0&&i<n&&j>=0&&j<m)&&(vis[i][j]==1)){
                    ans.push_back(i+1);
                    ans.push_back(j);
                    return ans;
                }
            }
            if(i<0 || i>=n || j<0 || j>=m){
                 break;
            }
           
        }
        if(ans.size()==0){
            if(i>=n||i<0){
                if(i>=n) ans.push_back(i-1);
                else ans.push_back(i+1);
            }
            else{
                ans.push_back(i);
            }
            if(j>=m||j<0){
                if(j>=m) ans.push_back(j-1);
                else ans.push_back(j+1);
            }
            else{
                ans.push_back(j);
            }
        }
         return ans;
    }
};