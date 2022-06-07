#include<bits/stdc++.h>
using namespace std;
 
 
/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T> using Set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using Multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
*/
 
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
 
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
const int N = 200;
vector<pair<int,int>> g[N];
bool vis[N];
int dist[N];
set<int> leaf;
void dfs(int start, int cnt){
    vis[start] = true;
    ckmax(dist[start], cnt);
    for(const pair<int,int> node : g[start]){
        if(!vis[node.first]){
            if(g[node.first].size() == 1){
                leaf.insert(node.first);
            }
            dfs(node.first, cnt + node.second);
        }
    }
    return;
}
void Solve(){
    int n;
    cin >> n;
    for(int i = 1; i < n;i++){
        int u, v, c;
        cin >> u >> v >> c;
        g[u].push_back({v,c});
        g[v].push_back({u,c});
    }
    dfs(0, 0);
    int res = 0;
    for(const int v : leaf){
        ckmax(res, dist[v]);
    }
    cout << res << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
 
    int T = 1;
    //cin >> T;
    while(T--){
        Solve();
    }
    return 0;
 
}