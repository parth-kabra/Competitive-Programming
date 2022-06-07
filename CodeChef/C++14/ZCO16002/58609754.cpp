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
const int N = 1E5+4;
int dp[2505][N] = {{0}};
void Solve(){
    int n;
    cin >> n;
    vector<int> arr(n+1);
    for(int i = 1; i <= n;i++){
        cin >> arr[i];
    }
    int res = 0;
    sort(arr.begin(), arr.end());
    for(int i = 1; i <= n;i++){
        for(int j = 1; j <= i;j++){
            int diff = arr[i] - arr[j];
            dp[i][diff] = dp[j][diff] + 1;
            res = max(res, dp[i][diff]);
        } 
    }
    cout << res+1 << endl;
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