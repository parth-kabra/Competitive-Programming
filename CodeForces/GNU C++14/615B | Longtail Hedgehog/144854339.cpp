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
void Solve(){
    int n,m;
    cin >> n >> m;
    for(int i=0; i <= n ;i++){
        dist[i] = 1;
        visited[i] = false;
    }
    for(int i=0; i < m;i++){
        int u,v;
        cin >> u >> v;
        u--;
        v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    int res = 0;
    for(int i=0; i < n ;i++){
        res = max(res, dist[i] * g[i].size());
        for(const int node : g[i]){
            
            if(node > i){
                dist[node] = max(dist[node], dist[i] + 1);                
            }
        }
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