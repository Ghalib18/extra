class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string x=strs[0];
        string y=strs[n-1];
        int i=0;
        int j=0;
        string ans="";
        while(i<x.size()&&j<y.size()){
            if(x[i]==y[j]){
                ans+=x[i];
                i++;
                j++;
            }
            else break;
        }
        return ans;
    }
};