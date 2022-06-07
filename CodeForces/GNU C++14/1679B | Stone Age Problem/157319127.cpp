#include<bits/stdc++.h>
using namespace std;
 
 
/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T> using Set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using Multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
*/
 
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
 
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
class segtree{
private:
    vector<int> seg, lazy;
    int n;
public:
    void init(const int &n){
        seg.resize(4 * n + 2, 0LL);
        lazy.resize(4 * n + 2, 0LL);
        this->n = n;
    }
 
    void merge(int &a, int &b, int &c){
        a = b + c;
    }
 
    void build(int ind, int low, int high, vector<int> &arr){
        if(low == high){
            seg[ind] = arr[low];
            return;
        }
        int mid= low + (high - low) / 2;
        build(2 * ind + 1, low, mid, arr);
        build(2 * ind + 2, mid + 1, high, arr);
        merge(seg[ind], seg[2 * ind + 1] , seg[2 * ind + 2]);
    }
    
    void build(vector<int> &arr){
        build(0,0,n-1, arr);
    }
 
    void propagate(int ind, int low, int high){
        int l = lazy[ind];
        if(l == 0){
            return;
        }
        seg[ind] = (high - low + 1) * l;
        if(low != high){
            lazy[2 * ind + 1] = l;
            lazy[2 * ind + 2] = l;
        }
        lazy[ind] = 0;
    }
 
    void update(int ind, int low, int high, int l, int r, int v){
        propagate(ind, low, high);
        if(r < low or high < l){
            return;
        }
        if(low >= l && high <= r){
            lazy[ind] = v;
            propagate(ind, low, high);
            return;
        }
        int mid = low + (high - low) / 2;
        update(2 * ind + 1, low, mid, l, r, v);
        update(2 * ind + 2, mid + 1, high,l,r,v);
        merge(seg[ind], seg[2 * ind + 1], seg[2 * ind + 2]);
    }
 
    int update(int l, int r, int x){
        update(0,0,n-1,l,r,x);
    }
 
    int sum(){
        return seg[0];
    }
 
};
void Solve(){
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for(int &i : arr){
        cin >> i;
    }
    segtree s;
    s.init(n);
    s.build(arr);
 
    while(q--){
        int t;
        cin >> t;
        if(t == 1){
            int i, v;
            cin >> i >> v;
            i--;
            s.update(i,i, v);
        }
        else{
            int x;
            cin >> x;
            s.update(0,n-1,x);
        }
        cout << s.sum() << endl;
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
 
    int T = 1;
    //cin >> T;
    while(T--){
        Solve();
    }
    return 0;
 
}