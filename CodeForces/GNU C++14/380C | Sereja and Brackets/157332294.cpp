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
struct node{
    int open, close, full;
    node(const int &open, const int &close, const int &full){
        this->open = open;
        this->close = close;
        this->full = full;
    }
    node(){
        open = 0;
        close = 0;
        full = 0;
    }
};
class segtree{
private:
    vector<node> seg;
    int n;
public:
    void init(const int &n){
        seg.resize(4 * n + 2, node(0, 0, 0));
        this->n = n;
    }
    node merge(node &a, node &b){
        node res;
        int mn = min(a.open, b.close);
        res.full = a.full + b.full + mn;
        res.open = a.open + b.open - mn;
        res.close = a.close + b.close - mn;
        return res;
    }
    void build(int ind, int low, int high, string &s){
        if(low == high){
            seg[ind].open = (s[low] == '(');
            seg[ind].close = (s[low] == ')');
            seg[ind].full = 0;
            return;
        }
        int mid = low + (high - low) / 2;
        build(2 * ind + 1, low, mid, s);
        build(2 * ind + 2, mid + 1, high, s);
        seg[ind] = merge(seg[2 * ind + 1], seg[2 * ind + 2]);
    }
    void build(string &s){
        build(0,0,n-1,s);
    }
 
    node query(int ind, int low, int high, int l, int r){
        if(r < low || high < l){
            return node(0,0,0);
        }
        if(low >= l && high <= r){
            return seg[ind];
        }
        int mid = low + (high - low) / 2;
        node left = query(2 * ind + 1, low, mid, l, r);
        node right = query(2 * ind + 2, mid + 1, high,l, r);
        return merge(left, right);
    }
 
    int query(int l, int r){
        return query(0, 0, n - 1, l, r).full;
    }
 
};
void Solve(){
    string s;
    cin >> s;
    int n = s.size();
    segtree ds;
    ds.init(n);
    ds.build(s);
    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        cout << ds.query(l, r) * 2 << endl;
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