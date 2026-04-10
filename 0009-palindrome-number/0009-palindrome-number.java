class Solution {
    public boolean isPalindrome(int x) {
        int n=x;
        int ans=0;
        while(n>0){
          ans=ans*10+(n%10);
          n=n/10;
        }
        if(ans==x) return true;
        return false;
    }
}