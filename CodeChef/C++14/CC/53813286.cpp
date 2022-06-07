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
void dfs(int start, const int N, vector<bool> &visited, vector<vector<int>> &adj){
    visited[start] =true;
    for(int &node : adj[start]){
        if(!visited[node]){
            dfs(node, N , visited, adj);
        }
    }
}
int32_t main(){
    IO();
    int t;
    cin >>t;
    while(t--){
        const int N = 100001;
        vector<vector<int>> adj(N);
        vector<bool> visited(N, false);
        int n;
        cin >> n;
        int m;
        cin >> m;
        while(m--){
            int u,v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int cnt = 0;
        for(int i=0; i < n; i++){
            if(visited[i]) continue;
            dfs(i,N,visited,adj), cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}