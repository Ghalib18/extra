class Solution {
public:
    int minOperations(string s) {
        string x=s;
        int n=s.size();
        sort(x.begin(),x.end());
        if(x==s) return 0;
        if(n<3) return -1;
        if(x[0]==s[0]||x[n-1]==s[n-1]) return 1;
        
            for(int i=1;i<n-1;i++){
                if(s[i]==x[0]||s[i]==x[n-1]) return 2;
            }
        return 3;
    }
};