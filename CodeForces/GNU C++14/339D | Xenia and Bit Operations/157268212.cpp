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
    vector<int> seg;
    int n;
public:
 
    void init(const int &n){
        seg.resize(4 * n + 2);
        this->n = n;
    }
 
    void merge(int ind, int flag){
        if(flag){
            seg[ind] = seg[2 * ind + 1] | seg[2 * ind + 2];
        }
        else{
            seg[ind] = seg[2 * ind + 1] ^ seg[2 * ind + 2];
        }
    }
 
    void build(int ind, int low, int high, vector<int> &arr, int flag){
        if(low == high){
            seg[ind] = arr[low];
            return;
        }
        int mid = low + (high - low) / 2;
        build(2 * ind + 1, low, mid, arr, !flag);
        build(2 * ind + 2, mid + 1, high , arr, !flag);
        merge(ind, flag);
    }
 
    void build(vector<int> &arr, int flag){
        build(0, 0, n - 1, arr, flag);
    }
 
    int root(){
        return seg[0];
    }
 
    void update(int ind, int low,int high , int i, int v, int flag){
        if(low == high){
            seg[ind] = v;
            return;
        }
        int mid = low + (high - low) / 2;
        if(i <= mid) update(2 * ind + 1, low, mid, i, v, !flag);
        else update(2 * ind + 2, mid + 1, high , i, v, !flag);
 
        merge(ind, flag);
    }
 
    void update(int i, int v, int flag){
        update(0, 0, n - 1, i, v, flag);
    }
 
};
void Solve(){
    int n, q;
    cin >> n >> q;
    segtree s;
    vector<int> arr(1 << n);
    for(int &i : arr){
        cin >> i;
    }
    s.init(1 << n);
    s.build(arr, n % 2);
 
    while(q--){
        int i, v;
        cin >> i >> v;
        i--;
        s.update(i, v, n % 2);
        cout << s.root() << endl;
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