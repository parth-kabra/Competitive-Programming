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
const int N = 105;
int w[N];
int c[N];
void Solve(){
    int n,m;
    cin >> n >> m;
    int dp[n+1][m+1];
    for(int i=1; i <= n;i++){
        cin >> w[i] >> c[i];
    }
    for(int i=0; i <= m;i++){
        dp[0][i] = 0;
    }
    for(int i=1; i <= n;i++){
        for(int j = 0; j <= m;j++){
            dp[i][j] = dp[i-1][j];
            if(j - w[i] >= 0){
                dp[i][j] = max(dp[i][j], dp[i-1][j - w[i]] + c[i]);
            }
        }
    }
    cout << dp[n][m];
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