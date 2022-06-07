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

void Solve(){
    int n;
    cin >> n;
    int arr[n];
    int dp[n];
    for(int i=0; i < n;i++){
        cin >> arr[i];
        dp[i] = 1;
    }
    int flag = 0;
    if(arr[n - 1] < 0) flag^=1;
    for(int i = n - 2 ; i >= 0; i--){
        if(arr[i] < 0 and !flag){
            dp[i] += dp[i+1];
            flag ^= 1;
        }
        if(arr[i] > 0 and flag){
            dp[i] += dp[i + 1] ;
            flag ^= 1;
        }
    }
    for(int i=0; i < n;i++){
        cout << dp[i] << " "; 
    }
    cout << endl;
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