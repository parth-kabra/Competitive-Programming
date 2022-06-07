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
const int N = 2 * 1e5 + 5;
vector<int> path;
vector<vector<int>> routes;
vector<bool> vis(N, false);
vector<int> g[N];
void dfs(int start){
    // if(vis[start]) return;
    vis[start] = true;
    path.push_back(start);
    for(const int node : g[start]){
        if(!vis[node]) dfs(node);
        else{
            if(g[start].size() == 1){ routes.push_back(path); path.clear(); }
        }
    };
}
void init(const int &n){
    path.clear();
    routes.clear();
    for(int i= 0; i <= n;i++){
        g[i].clear();
        vis[i] = false;
    }
 
}
void addedge(const int &a, const int &b){
    g[a].push_back(b);
    g[b].push_back(a);
}
void Solve(){
    int n;
    cin >> n;
 
    init(n);
    vector<int> arr(n + 10);
    for(int i = 0; i < n;i++) cin >> arr[i];
    int r = 0;
    for(int i=1; i<=n;i++){
        if(i!=arr[i-1]){
            g[arr[i-1]].push_back(i);
            g[i].push_back(arr[i-1]);
        }
        else r = arr[i-1];
    }
    if(n == 1){
        cout << 1 << endl << 1 << endl << 1 << endl;
        return;
    }
    dfs(r);
    //debug(routes.size());
    cout << routes.size() << endl;
    for(const vector<int> &route : routes){
        cout << route.size() << endl;
        //debug(route.size())
        for(const int &node : route){ cout << node << " "; }
        cout << endl;
    }
    //cout << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
 
    int T = 1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
 
}