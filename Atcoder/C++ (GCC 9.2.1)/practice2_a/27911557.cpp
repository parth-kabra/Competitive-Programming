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
template<class T> class UFDS{
    private:
    vector<T> par,siz;
 
    public:
    UFDS(T n) : par(n,-1),siz(n,1){}
    T root (T x){
        if (par[x] == -1) return x;
        else return par[x] = root(par[x]);
    }
    bool same(T x,T y){
        return root(x) == root(y);
    }
    bool unite(T x,T y){
        x = root(x);y=root(y);  
        if (x==y) return false; 
        if (siz[x] < siz[y]) swap(x,y);
        par[y] = x;
        siz[x] += siz[y]; 
        return true;
    }
    T size(T x){
        return siz[root(x)];
    }
    void init(){
        for(auto& x:par) x = -1;
        for(auto& x:siz) x = 1;
    }
};
int32_t main(){
    usaco();

    // code here...
    int n,q;
    cin >> n >> q;
    UFDS<int> ufds(n);
    for(int i=0; i < q;i++){
        int x,u,v;
        cin >> x >> u >> v;
        if(x){
            cout << ufds.same(u,v) << endl;
        }
        else{
            ufds.unite(u,v);
        }
    }

    return 0;
}