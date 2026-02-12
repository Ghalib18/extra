class Solution {
public:
    int longestBalanced(string s) {
        int n=s.size();
        vector<int> mp(26,0);
        int maxi=0;

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int id=s[j]-'a';
                mp[id]++;
                bool flag=true;
                for(int k=0;k<26;k++){
                     if(mp[k]==0) continue;
                     else {
                        if(mp[k]!=mp[id]){
                            flag=false;
                            break;
                        }
                     }
                }
                if(flag) maxi=max(maxi,j-i+1);
            }
             
                mp.assign(mp.size(), 0);
        }
        return maxi;
    }
};