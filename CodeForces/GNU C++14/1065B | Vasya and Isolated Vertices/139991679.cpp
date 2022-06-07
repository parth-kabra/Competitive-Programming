#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void usaco(string filename = ""){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
 
    int n,m;
    cin >> n >> m;
    int low = 1;
    int high = m;
    while(high > 0){
        int temp = min(low, high);
        high-=temp;
        low++;
    }
    int res = n;
    if(low > 1){
        res = n - low;
    }
    cout << max(0LL, n - m * 2)  << " " << res << endl;
 
    return 0;
}