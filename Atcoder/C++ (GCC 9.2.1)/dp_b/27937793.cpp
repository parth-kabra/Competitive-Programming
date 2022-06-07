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
const int INF = 1e9;

int32_t main(){
    usaco();

    // code here...
    int n,k;
    cin >> n >> k;
    int height[n+1];
    int dp[n+1];
    for(int i=1; i <= n;i++){
        cin >> height[i];
        dp[i] = INF;
    }

    dp[1] = 0;
    for(int i=2 ; i <= n; i++){
        for(int j = 1; j <= k;j++){
            if(i - j >= 1){
                dp[i] = min(dp[i], dp[i - j] + abs(height[i] - height[i-j]));
            }
        }
    }
    cout << dp[n] << endl;

    return 0;
}