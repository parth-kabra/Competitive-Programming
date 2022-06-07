#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
#define endl '\n'
const int mod = 1e9+7;
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
//INORDER(L,Root,R)
//PREORDED(Root,L,R)
//POSTORDER(L,R,Root)
template<typename T> using Set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
void usaco(string filename = ""){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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
const int N = (2 * 1e5) + 5;
vector<int> adj[N];
vector<bool> visited(N, false);
vector<int> dist(N, 1e9);
int32_t main(){
    usaco();

    int n,m;
    cin >> n >> m;
    for(int i=0; i < m;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);

        if((u == 1 and v == n) || (u == n and v == 1)){
            cout << "POSSIBLE" << endl;
            return 0;
        }
    }

    queue<int> q;
    q.push(1);
    visited[1] = true;
    dist[1] = 0;

    while(!q.empty()){
        int v = q.front();
        q.pop();

        for(int u : adj[v]){
            if(!visited[u]){
                visited[u] = true;
                q.push(u);
                dist[u] = dist[v] + 1;
            }
        }
    }

    debug(dist[n]);

    if(dist[n] == 2){
        cout << "POSSIBLE" << endl;
    }
    else{
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}