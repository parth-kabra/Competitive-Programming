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
const int N = 1e5+5;
vector<int> g[N];
bool visited[N];
int dist[N];
int dfs(int start){
    if(dist[start]) return dist[start];   
    for(int node : g[start]){
        dist[node] = dfs(node);
        dist[start] = max(dist[node] + 1, dist[start]);
    }
    return dist[start];
}
void Solve(){
    int n,m;
    cin >> n >> m;
    for(int i=0; i < m;i++){
        int u,v;
        cin >> u >> v;
        u--;
        v--;
        g[u].push_back(v);
    }
    for(int i=0; i < n;i++){
        dfs(i);
    }
    int res = INT_MIN;
    for(int i=0; i < n;i++){
        res = max(res, dist[i]);
    }
    cout << res << endl;
}   
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();

    int t = 1;
    //cin >> t;
    while(t--){
        Solve();
    }
 
    return 0;
}