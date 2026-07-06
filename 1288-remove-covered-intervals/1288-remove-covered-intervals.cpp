class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& v) {
        int n=v.size();
      sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
            if (a[0] != b[0])
                return a[0] < b[0];   // first: ascending

            return a[1] > b[1];     // second: descending
          });
        int cnt=0;
        int i=0;
        int j=1;

        while(j<n){
            int a=v[j][0];
            int b=v[j][1];
            int c=v[i][0];
            int d=v[i][1];
             if(c<=a&&b<=d){
                cnt++;
                j++;
             }
             else{
                i=j;
                j++;
             }

        }

        
        return n-cnt;
    }
};