class Solution {
    public int furthestDistanceFromOrigin(String moves) {
        int n=moves.length();
        int l=0;
        int r=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            char c=moves.charAt(i);
            if(c=='L') l++;
            else if(c=='R') r++;
            else cnt++;
        }
        cnt+=Math.abs(l-r);
        return cnt;
    }
}