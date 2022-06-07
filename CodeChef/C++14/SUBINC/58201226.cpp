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
void Solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i < n;i++){
        cin >> arr[i];
        dp[i] = 1;
    }
    for(int i=1; i < n;i++){
        if(arr[i-1] <= arr[i]){
            dp[i] += dp[i - 1];
        }
    }
    cout << accumulate(dp, dp+n, 0LL) << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();

    int t = 1;
    cin >> t;
    while(t--){
        Solve();
    }
 
    return 0;
}