class Solution {
static vector<int> dfs(int start, vector<vector<int>> &adj, vector<bool> &vis, string &labels, vector<int> &res){
    vis[start] = true;
    vector<int> cnt(30);
    cnt[labels[start] - 'a'] = 1;
    for(int &v : adj[start]){
        if(!vis[v]){
            vector<int> child = dfs(v, adj, vis, labels, res);
            for(int i =0; i < 30; i++){
                cnt[i] += child[i];
            }
        }
    }
    res[start] = cnt[labels[start] - 'a'];
    return cnt;
}
public:
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<vector<int>> adj(n + 1);
        for(vector<int> &e : edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        vector<bool> vis(n + 1, false);
        vector<int> res(n);
        dfs(0, adj, vis, labels, res);
        return res;
    }
};
