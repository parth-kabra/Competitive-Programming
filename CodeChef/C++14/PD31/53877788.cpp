#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void IO(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);freopen("error.txt", "w", stderr); 
    #endif
}
//INORDER(L,Root,R)
//PREORDED(Root,L,R)
//POSTORDER(L,R,Root)
const int N = 1e5+5;
vector<int> adj[N];
vector<bool> visited(N,false);
void dfs(int start){
    visited[start] = true;
    for(int node : adj[start]){
        if(!visited[node]){
            dfs(node);
        }
    }
}
int comp(int n){
    int cnt = 0;
    for(int i= 1; i <= n ;i++){
        if(!visited[i]){
            dfs(i), cnt++;
        }
    }
    return cnt;
}
int32_t main(){
    IO();

    int n,m;
    cin >> n >> m ;
    for(int i=1; i <= n ;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(comp(n) == 1 and m == n-1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}