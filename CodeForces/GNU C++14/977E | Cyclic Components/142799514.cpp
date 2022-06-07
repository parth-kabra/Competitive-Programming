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
const int N = (2 * 1e5) + 5;
vector<int> g[N];
vector<bool> visited(N, false);
bool cycle;
void dfs(int start){
    visited[start] = true;
    if(g[start].size() != 2){
        cycle = false;
    }
    for(int node : g[start]){
        if(!visited[node]){
            dfs(node);
        }
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
    
    int n,m;
    cin >> n >> m;
    for(int i=0; i < m;i++){
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int res = 0;
    for(int i=1; i <= n ;i++){
        cycle = true;
        if(!visited[i]){
            dfs(i);
            if(cycle){
                res++;
            }
        }
    }
    cout << res << endl;
 
 
    return 0;
}