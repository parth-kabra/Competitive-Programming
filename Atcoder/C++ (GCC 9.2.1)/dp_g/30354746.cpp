#include<bits/stdc++.h>
using namespace std;


/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T> using Set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using Multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
*/


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
const int N = 1e5 + 5;
vector<int> g[N];
const int inf = 1e18;
int dist[N];
int f(int start){
    if(dist[start]) return dist[start];
    for(const int node : g[start]){
        dist[node] = f(node);
        dist[start]= max(dist[node] + 1, dist[start]);
    }
    return dist[start];
}
void Solve(){
    int n, m;
    cin >> n >> m;
    for(int i=0; i < m ;i++){
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        g[u].push_back(v);     
    }
    for(int i=0; i < n;i++){
        f(i);
    }
    int res = 0LL;
    for(int i=0; i < n;i++){
        res = max(res, dist[i]);
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
