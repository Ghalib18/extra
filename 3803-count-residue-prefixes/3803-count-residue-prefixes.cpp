class Solution {
public:
    int residuePrefixes(string s) {
        int n=s.size();
        unordered_set<char> st;
        int i=0;
        int cnt=0;
        while(i<n){
            st.insert(s[i]);
            int dis=st.size();
            int len=(i+1)%3;
            if(dis==len) cnt++;
            i++;
        }
        return cnt;
    }
};