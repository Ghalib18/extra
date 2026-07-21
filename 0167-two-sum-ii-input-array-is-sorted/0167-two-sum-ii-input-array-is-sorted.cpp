class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        vector<int> ans;
        int n=nums.size();
        int i=0;
        int j=n-1;
        while(i<j){
            int sum=nums[i]+nums[j];
            if(sum==k){
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
            if(sum>k) j--;
            else i++;
        }
        return ans;
    }
};