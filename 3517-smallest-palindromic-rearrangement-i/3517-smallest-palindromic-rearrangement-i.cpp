class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        map<char,int> mp;
        for(auto x:s){
            mp[x]++;
        }
        string ans="";
        string chx="";
        for(auto x:mp){
            char ch=x.first;
            int cnt=x.second;
            if(cnt%2!=0){
                chx+=ch;
            }
            string str="";
            for(int i=0;i<cnt/2;i++){
                str+=ch;
            }
            ans+=str;
        }
        string str=ans;
        reverse(str.begin(),str.end());
        ans=ans+chx+str;
        return ans;
    }
};