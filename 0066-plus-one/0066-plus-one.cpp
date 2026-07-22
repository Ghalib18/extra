class Solution {
public:
    vector<int> plusOne(vector<int>&arr) {
        vector<int> ans;
        int n=arr.size();
        if(arr[n-1]<9){
            arr[n-1]=arr[n-1]+1;
            return arr;
        }
        int carry=1;
        for(int i=n-1;i>=0;i--){
            int val=(arr[i]+carry)%10;
            carry=(arr[i]+carry)/10;
            ans.push_back(val);
        }
        if(carry==1){
            ans.push_back(1);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};