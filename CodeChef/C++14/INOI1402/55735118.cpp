#include<bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void usaco(string filename = ""){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
int32_t main() {
    usaco();
 
    int n,m;
    cin >> n >> m;
    vector<vector<int>> g(n+5, vector<int>(n+5, 1e18));
    while(m--){
        int u,v,w;
        cin >> u >> v >> w;
        g[u][v] = g[v][u] = w;
    }
    for(int k = 1; k <= n ; k++){
        for(int i =1; i <= n ;i++){
            for(int j = 1; j <= n; j++){
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
            }
        }
    }

    int res = 0;
    for(int i=1; i <= n;i++){
        for(int j=i+1; j <= n;j++){
            res = max(res, g[i][j]);
        }
    }

    cout << res << endl;

    return 0;
}