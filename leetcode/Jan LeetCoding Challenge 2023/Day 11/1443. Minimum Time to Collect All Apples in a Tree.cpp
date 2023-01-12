class Solution {
static int dfs(int start, vector<bool> &vis, vector<vector<int>> &adj, vector<bool> &has){
    int res = 0;
    if(!vis[start]) vis[start] = true;
    for(int &v : adj[start]){
        if(!vis[v]){
            res += dfs(v, vis, adj, has);
        }
    }
    if(has[start] || res){
        return res + 2;
    }
    return res;
}
public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<bool> vis(n + 1, false);
        vector<vector<int>> adj(n + 1);
        for(vector<int> &edge : edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        const int &res = dfs(0, vis, adj, hasApple);
        return max(0 ,res - 2);
    }
};
