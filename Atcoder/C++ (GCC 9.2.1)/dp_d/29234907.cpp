#include<bits/stdc++.h>
using namespace std;
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
const int N = 1e5+5;
int dp[N];
int arr[N];
void Solve(){
    int n, k;
    cin >> n >> k;
    for(int i=1; i <= n;i++){
        cin >> arr[i];
        dp[i] = (int)1e18;
    }
    dp[1] = 0;
    for(int i=1; i <= n;i++){
        for(int j = 1; j <= k;j++){
            if(i + j <= n){
                dp[i+j] = min(dp[i+j], dp[i] + abs(arr[i] - arr[i+j]));
            }
        }
    }
    debug(dp[n])
    cout << dp[n] << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();

    int t = 1;
    //cin >> t;
    while(t--){
        Solve();
    }
 
    return 0;
}