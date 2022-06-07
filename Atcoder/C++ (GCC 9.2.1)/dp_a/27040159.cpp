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

    // atcoder dp contest problem : 1
    // be sure of 1 based indexing in DP
    // start!

    const int N = 1e5+1;
    int dp[N],arr[N];
    int n;
    cin >> n;
    for(int i=1;i <= n;i++){
        cin >> arr[i];
        dp[i] = 1e9+7;
    }
    dp[1] = 0;
    for(int i=1; i <= n;i++){
        if(i+1 <= n){
            dp[i+1] = min(dp[i+1], dp[i] + abs(arr[i] - arr[i+1]));
        }
        if(i+2 <= n){
            dp[i+2] = min(dp[i+2], dp[i] + abs(arr[i] - arr[i+2]));
        }
    }

    cout << dp[n] << endl;
    return 0;   
}