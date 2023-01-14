class Solution {
static int dfs(int start, vector<vector<int>> &adj, vector<bool> &vis, string &s, int &res){
    vis[start] = true;
    int mx = 1;
    for(int &v : adj[start]){
        if(vis[v]) continue;
        int curr = dfs(v, adj, vis, s, res);
        if(s[start] != s[v]){
            res = max(res, mx + curr);
            mx = max(mx, curr + 1);
        }
    }
    return mx;
}
public:
    int longestPath(vector<int>& parent, string s) {
        const int n = parent.size();
        if(n == 1){
            return 1;
        }
        vector<vector<int>> adj(n + 1);
        for(int i = 1; i < n;i++){
            adj[parent[i]].push_back(i);
        }
        int res = 0;
        vector<bool> vis(n + 1, false);
        dfs(0, adj, vis, s, res);
        return max(res, 1);
    }
};
