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
// there is an edge between Node[i] and Edge[i]
const int N = (3 * 1e5)+5;
int n,m;
vector<int> Node(N);
vector<int> Edge(N);
bool dfs(int u, int v){
    for(int i=0 ; i < m ;i++){
        if((Node[i] == u || Node[i] == v || Edge[i] == u || Edge[i] == v)){ continue;}
            if(v){
                return false;
            }
            else{
                return (dfs(Edge[i],u) || dfs(Node[i], u));
            }
    }
    return true;
}
int32_t main(){
    IO();
    cin >> n >> m;
    for(int i=0; i < m;i++){
        cin >> Node[i] >> Edge[i];
    }
    bool visited = dfs(Node[0], 0) || dfs(Edge[0], 0);
    puts(visited ? "YES" : "NO");
 
    return 0;
}