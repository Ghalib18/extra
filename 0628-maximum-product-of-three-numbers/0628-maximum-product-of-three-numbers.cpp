class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int k=3;
        int pro=1;

           if(nums[n-2]*nums[n-3]<nums[0]*nums[1]&&nums[n-1]>0){
               pro=nums[0]*nums[1];
           }
           else if(nums[n-2]*nums[n-3]>=nums[0]*nums[1]&&nums[n-1]>0){
               pro=nums[n-2]*nums[n-3];
           } 
           else{
                pro=nums[n-2]*nums[n-3]; 
           }
          
        
        return pro*nums[n-1];
    }
};