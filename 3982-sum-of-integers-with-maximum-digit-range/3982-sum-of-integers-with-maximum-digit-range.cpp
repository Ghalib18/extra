class Solution {
public:

    int solve(int n){
        int smallest=n%10;
        int largest=n%10;
        n=n/10;
        while(n){
            int ld=n%10;
            smallest=min(ld,smallest);
            largest=max(ld,largest);
            n=n/10;
        }
        return largest-smallest;
    }
    int maxDigitRange(vector<int>& nums) {
        int maxDiff=0;
        for(auto x:nums){
            maxDiff=max(maxDiff,solve(x));
        }
        int ans=0;
        for( auto x:nums){
            if(maxDiff==solve(x)){
               ans+=x;
            }
            
        }
        return ans;
    }
};