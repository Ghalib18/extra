class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[j]+nums[k];
                if(sum==-nums[i]){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    while(j<k&&nums[j]==nums[j-1]){
                        j++;
                    }
                }
                else if(sum>-nums[i]){
                  k--;
                  while(j<k&&nums[k]==nums[k+1]){
                        k--;
                    }
                } 
                else{
                  j++; 
                  while(j<k&&nums[j]==nums[j-1]){
                        j++;
                    }
                } 
                
            }

            while(i<n-2&&nums[i]==nums[i+1]){
                i++;
            }
        }
        return ans;
    }
};