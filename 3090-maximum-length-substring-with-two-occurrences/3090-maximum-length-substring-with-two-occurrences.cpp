class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size();
        int l=0;
        int r=0;
        int maxi=0;
        unordered_map<char,int> mp;
        while(r<n){
            while(mp[s[r]]>=2){
                mp[s[l]]--;
                l++;
            }
            mp[s[r]]++;
            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};