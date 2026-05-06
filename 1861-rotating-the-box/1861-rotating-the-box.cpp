class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        for(int i=0;i<n;i++){
            int l=0;
            int r=1;
            while(r<m){
                if(arr[i][l]=='.'||arr[i][l]=='*'){
                    l++;
                    if(l==r) r++;
                }
                else if(arr[i][r]=='*'){
                    l=r+1;
                    r=l+1;
                }
                else if(arr[i][r]=='#') r++;
                else{
                    swap(arr[i][l],arr[i][r]);
                    l++;
                    r++;
                }
            }
        }

         vector<vector<char>> trans(m, vector<char>(n));
            for(int k=0;k<m;k++){
               for (int i = n-1; i>=0; i--) {
                     trans[k][i]=arr[i][k];           
                 }
                 reverse(trans[k].begin(),trans[k].end());

            }
            
            return trans;
    }
};