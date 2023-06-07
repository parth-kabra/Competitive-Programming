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
    vector<int> arr(n);
    multiset<int> ms;
    for(int &i : arr){
        cin >> i;
        ms.insert(i);
    }
    int res = 0;
    for(int k = 0; k <= n; k++){
        multiset<int> radhe = ms;
        for(int stage = 0; stage < k; stage++){
 
            // alice
            const int x = k - stage;
            auto it = radhe.upper_bound(x);
            if(it == radhe.begin()){
                break;
            }
            it = prev(it);
            radhe.erase(it);
            
            //........
 
            //bob
            if(!radhe.empty()){
                int bhai = *radhe.begin();
                radhe.erase(radhe.begin());
                radhe.insert(k + bhai - 1);
            }
        }
        // for(int bbb : radhe){
        //     cout << bbb << " ";
        // }
        // cout << endl;
        if(radhe.size() + k == n){
            res = k;
        }
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