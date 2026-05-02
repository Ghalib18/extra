class Solution {
public:

    bool valid(int x){
        int cnt=0;
      while(x){
        int ld=x%10;
        if(ld==2||ld==5||ld==6||ld==9) cnt++;
        else if(ld==3||ld==4||ld==7) return false;
        x=x/10;
      }
      return (cnt)?true:false;
    }

    int rotatedDigits(int n) {
        int ans=0;
        for(int i=1;i<=n;i++){
            if(valid(i)) ans++;
        }
        return ans;
    }
};