class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
       int pro=1;
       int cnt=0;
       for(auto x:nums){
        if(x==0){
            cnt++;
        }
        else{
           pro*=x;
        }
          
       }
       vector<int> ans;
       for(auto x:nums){
        if(x==0&&cnt==1) ans.push_back(pro);
        else if(x==0&&cnt>1) ans.push_back(0);
        else {
            if(cnt>0) ans.push_back(0);
            else ans.push_back(pro/x);
        }
       }
       return ans; 
    }
};