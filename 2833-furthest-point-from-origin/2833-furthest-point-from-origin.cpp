class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n=moves.size();
        int l=0;
        int r=0;
        int cnt=0;
        for(auto c:moves){
            if(c=='L') l++;
            else if(c=='R') r++;
            else cnt++;
        }
        cnt+=abs(l-r);
        return cnt;
    }
};