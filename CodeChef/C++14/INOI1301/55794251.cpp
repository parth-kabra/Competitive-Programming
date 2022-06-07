#include<bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void usaco(string filename = ""){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if(filename.size() > 0){
        #ifndef ONLINE_JUDgE
            freopen((filename + ".in").c_str(), "r", stdin);
            freopen((filename + ".out").c_str(), "w", stdout);
        #endif
    }
    else{
        #ifndef ONLINE_JUDgE
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
            freopen("error.txt", "w", stderr); 
        #endif
    }
}
const int N = 1e6+10;
int dp[N];
int arr[N];
int32_t main(){
    //usaco();
 
    int n,k;
    cin >> n >> k;
    for(int i=0; i <= n+5;i++){
        dp[i] = arr[i] = -1e18;
    }
    for(int i=0; i < n ;i++){
        cin >> arr[i];
    }
    dp[0] = 0;
    for(int i=0; i < n;i++){
        for(int pt : {i-1, i-2}){
            if(pt >= 0){
                dp[i] = max(dp[i], arr[pt] + dp[pt]);
            }
        }
    }
    for(int i=n-2; i>=0 ;i--){
        for(int pt : {i+1, i+2}){
            if(pt < n){
                dp[i] = max(dp[i], arr[pt] + dp[pt]);
            }
        }
    }
    cout << dp[k-1] << endl;

    return 0;
}