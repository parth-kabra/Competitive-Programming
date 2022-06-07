#include<bits/stdc++.h>
using namespace std;
 
/*
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T> using Set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using Multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
*/
 
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
    int mxind = 0;
    int mnind = 0;
    for(int i =0; i < n;i++){
        cin >> arr[i];
        if(arr[i] == n){
            mxind =  i + 1;
        }
        else if(arr[i] == 1){
            mnind = i + 1;
        }
    }
    valarray<int> pos = {
        abs(n - mnind),
        abs(n - mxind), 
        abs(1 - mnind), 
        abs(1 - mxind)
    };
    cout << pos.max() << endl;
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