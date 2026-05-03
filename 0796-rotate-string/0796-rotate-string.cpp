class Solution {
public:
    bool rotateString(string s, string g) {
        string x=s+s;
        if(s.size()!=g.size()) return false;
        if(x.find(g)!=-1) return true;
        return false;
    }
};