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
int vis[N];
vector<int> topo;
void dfs(int start){
    vis[start] = 1;
    for(int node : g[start]){
        if(vis[node] == 1){
            cout << -1 << endl;
            exit(0);
        }
        else if(vis[node] == 0){
            dfs(node);
        }
    }
    vis[start] = 2;
    topo.push_back(start);
}
void Solve(){
    int n,k;
    cin >> n >> k;
    vector<int> vert(k);
    for(int i=0; i < k;i++){
        cin >> vert[i];
    }
    for(int i=1; i <= n;i++){
        int x;
        cin >> x;
        for(int j = 0; j < x ;j++){
            int a;
            cin >> a;
            g[i].push_back(a);
        }
    }
    for(const int i : vert){
        if(vis[i] == 0){
            dfs(i);
        }
    }
    debug(topo.size());
    cout << topo.size() << endl;
    for(const int node : topo){
        cout << node << " ";
    }
    cout << endl;
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