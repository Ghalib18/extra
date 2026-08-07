class Solution {
public:
    int trap(vector<int>& ht) {
        int n=ht.size();
        vector<int> rt(n,0);
        vector<int> lt(n,0);
        int lmax=ht[0];
        int rmax=ht[n-1];
        for(int i=1;i<n;i++){
           lt[i]=lmax;
           lmax=max(lmax,ht[i]);
        }
        for(int i=n-2;i>=0;i--){
            rt[i]=rmax;
            rmax=max(rmax,ht[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int val=min(lt[i],rt[i]);
            if(val>ht[i]){
                ans+=val-ht[i];
            }
        
        }
        return ans;
        
    }
};