#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void usaco(string filename = ""){
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
class dsu{
private:
    vector<int> par, siz;
public:
    dsu(int n) : par(n, -1), siz(n, 1) {};
    int root(int x){
        if(par[x] == -1) return x;
        else return par[x] = root(par[x]);
    }
    bool same(int a, int b){
        return root(a) == root(b);
    }
    bool unite(int a, int b){
        a = root(a);
        b = root(b);
        if(a == b) return false;
        if(siz[a] < siz[b]){
            swap(a, b);
        }
        siz[a] += siz[b];
        par[b] = a;
        return true;
    }
    int size(int a){
        return siz[root(a)];
    }
};
struct Edge{
    int from, to, cost;
    Edge(int from , int to , int cost){
        this->from = from;
        this->to = to;  
        this->cost = cost;
    }
    Edge(){};
    bool operator<(const Edge &e){
        return e.cost > cost;
    }
};
void Solve(){
    int n,m;
    cin >> n >> m;
    dsu uf(n);
    vector<Edge> ar(m);
    for(Edge &e : ar){
        cin >> e.from >> e.to >> e.cost;
        e.from--;
        e.to--;
    }
    sort(ar.begin(), ar.end());
    int res = 0;
    int curr = 0;
    for(const Edge &e : ar){
        if(uf.unite(e.from, e.to)){
            continue;
        }
        curr += e.cost;
        res = max(res, curr);
        if(curr < 0){
            curr = 0;
        }
    }
    cout << res << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
    
    int t = 1;
    //cin >> t;
    while(t--){
        Solve();
    }
 
    return 0;
}