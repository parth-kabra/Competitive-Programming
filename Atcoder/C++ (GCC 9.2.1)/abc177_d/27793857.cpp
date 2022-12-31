#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
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
// ds here...
class UFDS{
private:
    vector<int> link;
public:
    UFDS(int n) : link(n+1, -1){}
 
    int root(int u){
        return (link[u] < 0 ? u : link[u] = root(link[u]));
    }
 
    int size(int u){
        return -link[root(u)];
    }
 
    bool same(int u,int v){
        return root(u) == root(v);
    }
 
    bool unite(int u, int v){
        u = root(u);
        v = root(v);
        if(u == v){
            return false;
        }
        if(link[u] < link[v]){
            swap(u,v);
        }
        link[u] += link[v], link[v] = u;
        return true;
    }
};

int32_t main(){
    usaco();

    // code here...
    int n,m;
    cin >> n >> m;
    UFDS ufds(n);
    set<pair<int,int>> tree;
    for(int i=0; i < m ;i++){
        int u,v;
        cin >> u >> v;
        tree.insert({u - 1, v - 1});
    }
    for(auto it : tree){
        ufds.unite(it.first,it.second);
    }

    int res = 1;
    for(int i=1; i <= n ;i++){
        res = max(res, ufds.size(i));
    }
    cout << res << endl;

    return 0;
}