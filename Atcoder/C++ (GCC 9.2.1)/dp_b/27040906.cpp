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
    int dp[N];
    int arr[N];

    int n,k;
    cin >> n >> k;
    for(int i=1 ;i <= n ;i++){
        cin>>arr[i];
        dp[i] = 1e9+1;
    }

    dp[1] = 0;
    for(int i=1 ; i <= n;i++){
        for(int j = 1; j <= k; j++){
            if(i+j <= n){
                dp[i+j] = min(dp[i+j], dp[i] + abs(arr[i] - arr[i+j]));
            }
        }
    }
    cout << dp[n] << endl;

    return 0;   
}