class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> arr;
        for(auto x:grid){
            for(auto y:x){
                arr.push_back(y);
            }
        }
        int n=grid.size();
        int m=grid[0].size();
        k=k%(n*m);
        int l=(n*m-k);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(k>0){
                    grid[i][j]=arr[l];
                    k--;
                    l++;
                }
                else if(k==0){
                     l=0;
                     grid[i][j]=arr[l];
                     l++;
                     k--;
                }
                else{
                     grid[i][j]=arr[l];
                     l++;
                }
            }
        }
        return grid;
    }
};