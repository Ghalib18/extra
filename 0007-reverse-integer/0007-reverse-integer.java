class Solution {
    public int reverse(int n) {
        int ans=0;
        int INT_MAX=Integer.MAX_VALUE;
        int INT_MIN=Integer.MIN_VALUE;
        while(Math.abs(n)>0){
            if(ans>INT_MAX/10||ans<INT_MIN/10) return 0;
            ans=ans*10+(n%10);
            n=n/10;
        }
        return ans;
    }
}