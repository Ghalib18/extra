class Solution {
public:
   int solve(string s1,string s2){
        int n=s1.length();
        int m=s2.length();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        int maxi=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=s1[i-1]+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        return  dp[n][m];
    }
    int minimumDeleteSum(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        int ans1=0;
        int ans2=0;
        for(auto x:s1){
            ans1+=x;
        }
        for(auto x:s2){
            ans2+=x;
        }
        int ans=solve(s1,s2);
        int sum=ans1+ans2-2*ans;
        return sum;
    }
};