class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(!st.empty()&&s[i]==st.top()) st.pop();
            else st.push(s[i]);
        }
        string str="";
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};