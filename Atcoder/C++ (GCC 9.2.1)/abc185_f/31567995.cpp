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
    };

    void build(int ind, int low, int high, vector<int> &arr){
        if(low == high){
            seg[ind] =arr[low];
            return;
        }
        int mid = low + (high - low) / 2;
        build(2 * ind + 1, low, mid, arr);
        build(2 * ind + 2, mid + 1, high, arr);

        seg[ind] = seg[2 * ind + 1] ^ seg[2 * ind + 2];

    };

    void build(vector<int> &arr){
        build(0, 0, n - 1, arr);
    };

    int Xor(int ind, int low, int high, int l, int r){
        if(r < low || high < l){
            return 0LL;
        }
        if(low >= l && high <= r){
            return seg[ind];
        }
        int mid = low + (high - low) / 2;
        int left = Xor(2 * ind + 1, low, mid, l , r);
        int right = Xor(2 * ind + 2, mid + 1, high , l , r);
        return left ^ right;
    };

    int Xor(int low, int high){
        return Xor(0, 0, n - 1, low, high);
    };

    void update(int ind, int low, int high, int i, int v){
        if(i < low || i > high){
            return;
        }
        if(low == high){
            seg[ind] ^= v;
            return;
        }
        int mid = low + (high - low ) / 2;
        update(2 * ind + 1, low, mid, i, v);
        update(2 * ind + 2, mid + 1, high , i,v);
        seg[ind] = seg[2 * ind + 1] ^ seg[2 * ind + 2];
    };

    void update(int i, int v){
        update(0, 0, n - 1, i , v);
    };

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
        int t, l, r;
        cin >> t >> l >> r;
        if(t == 1){
            s.update(l - 1, r);
        }
        else{
            cout << s.Xor(l - 1, r - 1) << endl;
        }
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
