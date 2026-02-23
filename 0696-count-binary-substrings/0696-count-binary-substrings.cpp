class Solution {
public:
    int countBinarySubstrings(string s) {
        int n=s.size();
        int prev=0;
        int cur=1;
        int ans=0;
         for(int i=1;i<n;i++){
            if(s[i-1]==s[i]) cur++;
            else{
                ans+=min(cur,prev);
                prev=cur;
                cur=1;
                }
         }
         ans+=min(cur,prev);
         return ans;

    }
};