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
int dp[105][N];
void Solve(){
    int n, w;
    cin >> n >> w;
    vector<pair<int,int>> arr(n + 2);
    for(int i=1; i <= n;i++){
        cin >> arr[i].first >> arr[i].second;
    }
    for(int i=0; i <= w; i++){
        dp[0][i] = 0LL;
    }
    for(int i=1; i <= n ;i++){
        for(int j = 1; j <= w;j++){
            dp[i][j] = dp[i - 1][j];
            if(j - arr[i].first >= 0){
                dp[i][j] = max(dp[i][j], dp[i - 1][j - arr[i].first] + arr[i].second);
            }
        }
    }
    cout << dp[n][w];
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
