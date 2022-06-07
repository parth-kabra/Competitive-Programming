#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void IO(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);freopen("error.txt", "w", stderr); 
    #endif
}
int32_t main(){
    IO();

    const int mod = 1e9+7;
    int dp[10000001];
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for(int i=4; i <= 10000001;i++){
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % mod;
    } 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }

    return 0;   
}