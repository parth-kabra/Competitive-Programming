#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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
const int N = 1e5+5;
vector<int> adj[N];
vector<bool> visited(N, false);
int32_t main(){
    usaco();
 
    int n,m;
    cin >> n >> m;
    while(m --){
        int u,v;
        cin >> u >> v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
 
    set<int> s;
    s.insert(1);
    while(!s.empty()){
        int node = *s.begin();
        s.erase(node);
        visited[node] = true;
        cout << node << " ";
        for(int v : adj[node]){
            if(!visited[v]){
                s.insert(v);
            }
        }
    }
    cout << endl;
 
    return 0;
}