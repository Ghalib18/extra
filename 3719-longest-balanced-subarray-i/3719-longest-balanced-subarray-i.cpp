class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n= nums.size();
        int maxi=0;
         for(int i=0;i<n;i++){
            int odd=0;
            int even=0;
            set<int> st;
            for(int j=i;j<n;j++){
               if(st.find(nums[j])==st.end()){
                 if(nums[j]%2) odd++;
                 else even++;
                 st.insert(nums[j]);
               }
               
               if(odd==even) maxi=max(maxi,j-i+1);
            }
         }
         return maxi;
    }
};