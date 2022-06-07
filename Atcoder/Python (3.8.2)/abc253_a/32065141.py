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
void Solve(){
    int q;
    cin >> q;
    multiset<int> ms;

    map<int, int> mp;

    while(q--){
        int t;
        cin >> t;
        if(t == 1){
            int x;
            cin >> x;
            mp[x]++;
            ms.insert(x);
        }
        else if(t == 2){
            int x, c;
            cin >> x >> c;
            int m = min(c, mp[x]);
            while(m-- && ms.find(x) != ms.end()){
                ms.erase(ms.find(x));
            }
            mp[x] = max(mp[x], 0LL);
        }
        else{
            if(ms.empty()){
                continue;
            }

            int mn = *ms.begin();
            int mx = *ms.rbegin();
            cout << mx - mn << endl;
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
