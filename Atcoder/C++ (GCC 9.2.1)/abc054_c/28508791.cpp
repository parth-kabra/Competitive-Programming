#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void usaco(string filename = ""){
    if(filename.size() > 0){
        #ifndef ONLINE_JUDGE
            freopen((filename + ".in").c_str(), "r", stdin);
            freopen((filename + ".out").c_str(), "w", stdout);
        #endif
    }
    else{
        #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
            freopen("error.txt", "w", stderr); 
        #endif
    }
}
int dfs(int start, vector<vector<int>> &g, vector<bool> visited){
    int cnt = 0;
    visited[start] = 1;
    int sum = 0;
    for(int i=0; i < visited.size() ;i++){
        sum += visited[i];
    }
    if(sum == visited.size()){
        return 1;
    }
    for(int node : g[start]){
        if(!visited[node]){
            cnt += dfs(node, g , visited);
        }
    }
    return cnt;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
    int n,m;
    cin >> n >> m;
    vector<vector<int>> g(m*2);
    for(int i=0; i < m;i++){
        int u,v;
        cin >> u >> v;
        g[--u].push_back(--v);
        g[v].push_back(u);
    }
    vector<bool> visited(n, false); 
    cout << dfs(0, g, visited);

    return 0;
}