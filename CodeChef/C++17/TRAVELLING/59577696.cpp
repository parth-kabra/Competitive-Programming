#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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

struct Node{
    int node;
    int weight;
    Node(int node, int weight){
        this->node = node;
        this->weight = weight;
    }
};
const int N = 2 * 1E5 + 5;
vector<pair<int,int>> g[N];    
vector<int> dist;
void dijkstra(int src) {
    using T = pair<int,int>; priority_queue<T,vector<T>,greater<T>> pq;
    dist[src] = 0; 
    pq.push({0, src});

    while (pq.size()) {
        int cdist; int node; tie(cdist, node) = pq.top(); pq.pop();
        if (cdist != dist[node]) continue;
        for (pair<int, int> i : g[node]) {
            if (cdist+i.second < dist[i.first]) {
                pq.push({dist[i.first] = cdist+i.second, i.first});
            }
        }
    }
}
void Solve(){
    int n, m;
    cin >> n >> m;
    dist.resize(n + 1, LLONG_MAX);
    for(int i=0; i <= n;i++){
        g[i].clear();
    }
    for(int i=0; i < m;i++){
        int u,v;
        cin >> u >> v;
        u--;
        v--;
        g[u].push_back({v, 0LL});
        g[v].push_back({u, 0LL});
    }
    for(int i=0; i < n - 1;i++){
        g[i].push_back({i + 1, 1LL});
        g[i+1].push_back({i, 1LL});
    }
    dijkstra(0);
    cout << dist[n - 1] << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();

    int t = 1;
    cin >>t;
    while(t--){
        Solve();
        dist.clear();
    }

    return 0;
}