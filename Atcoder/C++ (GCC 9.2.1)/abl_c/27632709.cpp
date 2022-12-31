#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
#define endl '\n'
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
const int N = 100005;
vector<int> adj[N];
vector<bool> visited(N, false);
void dfs(int start){
    visited[start] = true;
    for(int node : adj[start]){
        if(!visited[node]){
            dfs(node);
        }
    }
}
int32_t main(){
    usaco();

    int n,m;
    cin >> n >> m;
    for(int i=0; i < m;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int res = 0;
    for(int i =1; i <= n;i++){
        if(!visited[i]){
            dfs(i), res++;
        }
    }

    cout << (res == 1 ? 0 : --res) << endl;

    return 0;
}