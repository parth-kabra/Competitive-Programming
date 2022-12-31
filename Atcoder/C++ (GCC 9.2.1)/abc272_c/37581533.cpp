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
    int n;
    cin >> n;
    vector<int> odd, even;
    while(n--){
        int x;
        cin >> x;
        if(x & 1) odd.push_back(x);
        else even.push_back(x);
    }   
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    int res = -1;
    int os = odd.size();
    int es = even.size();
    if(os >=2){
        if(odd[os - 1] != odd[os - 2]){
            ckmax(res, odd[os - 1] + odd[os - 2]);
        }
    }
    
    if(es >= 2){
        if(even[es - 1] != even[es - 2]){
            ckmax(res, even[es - 1] + even[es - 2]);
        }
    }
    cout << res << endl;
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