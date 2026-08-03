class Solution {
public:
    int findLucky(vector<int>& arr) {
      map<int,int> mp;
      for(auto x:arr){
        mp[x]++;
      }  
      int ans=-1;
      for(auto &x:mp){
        int val=x.first;
        int freq=x.second;
        if(val==freq) ans=val;
      }
      return ans;
    }
};