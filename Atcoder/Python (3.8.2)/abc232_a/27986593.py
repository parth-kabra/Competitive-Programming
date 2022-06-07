#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void usaco(string filename = ""){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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

// ds here...
int32_t main(){
    usaco();

    // code here...

    int n,m;
    cin >> n >> m;
    vector<int> w(n+1), v(n+1);
    for(int i=1; i <= n;i++){
        cin >>w[i] >> v[i];
    }
    vector<vector<int>> dp(n+1, vector<int>(m+1));
    for(int i=0; i <= m;i++){
        dp[0][i] = 0;
    }
    for(int i=1; i<=n;i++){
        for(int j=0; j <= m;j++){
            dp[i][j] = dp[i-1][j];
            if(j - w[i] >= 0){
                dp[i][j] = max(dp[i][j], dp[i-1][j - w[i]] + v[i]);
            }
        }
    }
    cout << dp[n][m] << endl;

    return 0;
}