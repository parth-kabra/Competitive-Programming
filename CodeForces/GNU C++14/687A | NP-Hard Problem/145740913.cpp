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
bool vis[N];
vector<set<int>> s(2);
int color[N];
void dfs(int start, int col){
    vis[start] = 1;
    color[start] = col;
    s[col].insert(start);
    for(int node : g[start]){
        if(vis[node]){
            if(color[node] != col ^ 1){
                cout << -1 << endl;
                exit(0);
            }
        }
        else{
            dfs(node, col ^ 1);
        }
    }
}
void Solve(){
    int n,m;
    cin >> n >> m;
    while(m--){
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(int i=1; i<= n;i++){
        if(!vis[i]){
            dfs(i, 0);
        }
    }
    for(auto it : s){
        cout << it.size() << endl;
        for(const int i : it){
            cout <<i << " ";
        }
        cout << endl;
    }
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