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
const int N = 100002;
vector<vector<int>> adj(N);
vector<bool> visited(N);
void dfs(int start){
    visited[start]= true;
    for(int node : adj[start]){
        if(!visited[node]){
            dfs(node);
        }
    }
}
int32_t main(){
    IO();
    int t;
    cin >>t;
    while(t--){
        for(int i = 0; i < 100002;i++ ){
            adj[i].clear();
            visited[i] = false;
        }
        int n,m;
        cin >> n >> m;
        for(int i= 0; i < m; i++){
            int u,v;
            cin >> u >>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int cnt = 0;
        for(int i=0; i < n ;i ++){
            if(visited[i]) continue;
            dfs(i), cnt++;
        }
        cout <<cnt << endl;
    }
    return 0;
}