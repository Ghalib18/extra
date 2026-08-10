class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size();
        int minPrice=INT_MAX;
        int maxProfit=INT_MIN;
        for(int i=0;i<n;i++){
            minPrice=min(nums[i],minPrice);
            maxProfit=max(nums[i]-minPrice,maxProfit);
        }
        return maxProfit;
    }
};