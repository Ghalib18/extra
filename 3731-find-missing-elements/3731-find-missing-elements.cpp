class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int prev=nums[0];
        vector<int> ans;
        for(int i=1;i<n;i++){
            if(nums[i]==prev+1){
                prev++;
            }
            else{
               ans.push_back(prev+1);
               prev++;
               i--;
            } 
        }
        return ans;
    }
};