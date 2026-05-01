class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        int prev=0;
        int next=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            prev+=nums[i]*i;
        }
        int maxi=prev;
            for(int j=0;j<n-1;j++){
                next=prev-(n)*nums[n-1-j]+sum;
                maxi=max(maxi,next);
                prev=next;
            }
        
        return maxi;
    }
};