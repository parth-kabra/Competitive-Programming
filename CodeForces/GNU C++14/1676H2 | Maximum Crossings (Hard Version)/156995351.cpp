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
 
vector<int> merge(const vector<int> &arr, const vector<int> &brr){
    vector<int> res;
    for(const int &i : arr){
        res.push_back(i);
    }
    for(const int &i : brr){
        res.push_back(i);
    }
    sort(res.begin(), res.end());
    return res;
}
 
struct Query{
    int l, r, k;
    Query(const int &l, const int &r, const int &k){
        this->l = l;
        this->r = r;
        this->k = k;
    };
};
 
class segtree{
private:
 
    vector<vector<int>> seg;
    int n;
 
public:
 
    void init(const int &n){
        seg.resize(4 * n + 2, {});
        this->n = n;
    }
 
    void build(int ind, int low, int high, vector<int> &arr){
        if(low == high){
            seg[ind].push_back(arr[low]);
            return;
        }
        int mid = low + (high - low) / 2;
        build(2 * ind + 1, low, mid, arr);
        build(2 * ind + 2, mid + 1, high, arr);
        seg[ind] = merge(seg[2 * ind + 1], seg[2 * ind + 2]);
    }
 
    void build(vector<int> &arr){
        build(0, 0, n - 1, arr);
    }
 
    int f(int ind, int low, int high, int l, int r, int k){
        
        if(r < low || high < l){
            return 0LL;
        }
        
        if(low >= l && high <= r){
            int it = lower_bound(seg[ind].begin(), seg[ind].end(), k) - seg[ind].begin();
            return (seg[ind].size() - it);
        }
        
        int mid = low + (high - low) / 2;
        
        int left = f(2 * ind + 1, low, mid, l, r, k);
        
        int right = f(2 * ind + 2, mid + 1, high, l, r, k);
        
        return left + right;
    }
    
    int f(int l, int r, int k){
        return f(0,0,n-1, l, r, k);
    }
    
    int f(const Query &q){
        return f(q.l, q.r, q.k);
    }
};
void Solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int &i : arr){
        cin >> i;
    }
    
    segtree s;
    s.init(n);
    s.build(arr);
    
    int res = 0;
    
    vector<Query> queries;
    
    for(int i=n - 1; i >= 0; i--){
        queries.push_back(Query(0, i - 1, arr[i]));
    }
    
    for(const Query &q : queries){
        res += s.f(q);
    }
    
    cout << res << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
 
    int T = 1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
 
}