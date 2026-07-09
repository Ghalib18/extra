class Solution {
public:

class DSU {
public:
    vector<int> par, size;
    DSU(int n) {
        par.resize(n);
        size.resize(n, 1);
        for (int i = 0; i < n; i++) par[i] = i;
    }
    int findParent(int node) {
        if (node == par[node]) return node;
        return par[node] = findParent(par[node]);
    }
    void unionBySize(int u, int v) {
        int pu = findParent(u);
        int pv = findParent(v);
        if (pu == pv) return;
        if (size[pu] >= size[pv]) {
            par[pv] = pu;
            size[pu] += size[pv];
        } else {
            par[pu] = pv;
            size[pv] += size[pu];
        }
    }
};
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<pair<int,int>> arr;
        for(int i=0;i<n;i++){
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());
        DSU dsu(n);

        for(int i=0;i<n-1;i++){
            int valA=arr[i].first;
            int valB=arr[i+1].first;
            if(valB-valA<=maxDiff){
                dsu.unionBySize(arr[i].second,arr[i+1].second);
            }
        }
         vector<bool> ans;
        for(auto x:queries){
            int p1=dsu.findParent(x[0]);
            int p2=dsu.findParent(x[1]);
            if(p1==p2) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};