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
const int N = 1e5 + 5;
vector<int> dp(N , (int)1e9);
vector<int> arr(N);
void Solve(){
    int n;
    cin >> n;
    for(int i=1; i <= n;i++){
        cin >> arr[i];
    }
    dp[1] = 0;
    for(int i= 1; i <= n;i++){
        for(const int &j : {i + 1, i + 2}){
            dp[j] = min(dp[j], dp[i] + abs(arr[i] - arr[j])); 
        }
    }
    cout << dp[n] << endl;
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
