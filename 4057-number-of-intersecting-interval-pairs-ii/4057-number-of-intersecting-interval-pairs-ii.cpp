class Solution {
public:
    static bool comparator(pair<int,int> a, pair<int,int>  b){
        if(a.first!=b.first)return a.first<b.first;
         return a.second>b.second;
    }
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        vector<pair<int,int>> arr;

        for(auto x: intervals){
            int start=x[0];
            int end=x[1];
            arr.push_back({start,1});
            arr.push_back({end,-1});
        }
        sort(arr.begin(),arr.end(),comparator);
        long long active=0;
        long long ans=0;
        for(auto [val,del]:arr){
            if(del==1){
                ans+=active;
                active++;
            }
            else active--;

        }
        return ans;
    }
};