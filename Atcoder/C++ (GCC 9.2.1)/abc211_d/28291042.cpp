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
const int N = (2 * 1e5) + 2;
const int INF = 1e9;
const int M = 1e9+7;
vector<int> g[N];
int32_t main() {
    usaco();

    int n,m;
    cin >> n >> m;
    for(int i=0; i < m ;i++){
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int> dist(n+1, INF);
    vector<int> ways(n+1, 0);
    dist[1] = 0;
    ways[1] = 1;
    queue<int> q;
    q.push(1);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v : g[u]){
            if(dist[v] > dist[u] + 1){
                dist[v] = dist[u] + 1;
                q.push(v);
                ways[v] = ways[u];
            }
            else if(dist[v] == dist[u] + 1){
                ways[v] = (ways[v] + ways[u]) % M;
            }
        }
    }

    cout << ways[n] << endl;

    return 0;
}