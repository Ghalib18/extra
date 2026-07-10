class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int> mp;
        for(auto x:text){
            mp[x]++;
        }
        int cnt=INT_MAX;
        for(auto x:mp){
            if(x.first=='a') cnt=min(cnt,x.second);
            else if(x.first=='b')cnt=min(cnt,x.second);
            else if(x.first=='n')cnt=min(cnt,x.second);
            else if(x.first=='l')cnt=min(cnt,x.second/2);
            else if(x.first=='o')cnt=min(cnt,x.second/2);
        }
        if(mp.size()<5) cnt=0;
        if(cnt==INT_MAX) cnt=0;
        return cnt;
    }
};