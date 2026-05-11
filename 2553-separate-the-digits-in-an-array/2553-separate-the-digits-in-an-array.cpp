class Solution {
public:
    vector<int> rev(int x){
        vector<int> ans;
        while(x){
            int ld=x%10;
            ans.push_back(ld);
            x=x/10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;

        for(auto x:nums){
            vector<int> arr=rev(x);
            for(auto y:arr){
                ans.push_back(y);
            }
        }
        return ans;
    }
};