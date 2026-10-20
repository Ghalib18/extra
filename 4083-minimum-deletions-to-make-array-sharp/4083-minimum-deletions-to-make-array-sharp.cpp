class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int n=nums.size();
        int prev=nums[0];
        int del=0;
        for(int i=1;i<n;i++){
            if(nums[i]==prev){
                del++;
            }
            else{
                prev=nums[i];
            }
        }
        return del;
    }
};