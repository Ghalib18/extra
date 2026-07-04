class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        int ans=INT_MAX;
        vector<vector<pair<int,int>>> adj(n+1);

        for(auto x:roads){
            int u=x[0];
            int v=x[1];
            int w=x[2];

            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }

        vector<bool>vis(n+1,false);
        queue<int> qt;

        qt.push(1);
        vis[1]=true;

        while(!qt.empty()){
            int node=qt.front();
            qt.pop();
            for(auto [nei,wt]:adj[node]){
                ans=min(ans,wt);
                if(!vis[nei]){
                    vis[nei]=true;
                    qt.push(nei);
                }
            }
        }
        return ans;
    }
};