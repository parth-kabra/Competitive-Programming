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
int roots[N];
int res = 0;
 
void dfs(int x, int y, int cnt, int m){
    // have a cat at the ith vetice
    if(roots[y]){
        cnt++;
    }
    else{
        cnt = 0;
    }
    if(cnt > m){
        return;
    }
    if(adj[y].size() == 1 && y!=1){
        res++;
    }
    for(int node : adj[y]){
        if(node != x){
            dfs(y,node,cnt,m);
        }
    }
}
int32_t main(){
    IO();
 
    int n,m;
    cin >> n >> m;
    for(int i=1; i <= n ;i++){
        cin >> roots[i];
    }
    for(int i=1; i < n;i++){
        int u,v;
        cin >> u >>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }    
    dfs(0, 1, 0, m);
    cout << res << endl;
 
    return 0;
}