#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void IO(const char* I ="input.txt",const char* O="output.txt", const char*E="errot.txt"){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen(I, "r", stdin);freopen(O, "w", stdout);freopen("error.txt", "w", stderr); 
    #endif
}
//INORDER(L,Root,R)
//PREORDED(Root,L,R)
//POSTORDER(L,R,Root)
const int N=5005;
vector<int> adj[N];
vector<bool> visited(N, false);
vector<int> color(N);
bool bip(int start, int match){
    visited[start] = true;
    color[start] = match;
    for(int node : adj[start]){
        if(!visited[node]){
            if(!bip(node, !match)){
                return false;
            }
        }
        else{
            if(color[node] == color[start]){
                return false;
            }
        }
    }
    return true;
}
int32_t main(){
    IO();
    
    int n,m;
    cin >> n >> m ;
    for(int i=0; i < m ;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool found = true;
    for(int i= 1 ; i <= n ;i++){
        if(!visited[i]){
            if(!bip(i, 0)){
                found =false;
            }
        }
        if(!found){
            break;
        }
    }
    puts(found ? "YES" : "NO");

    return 0;
}