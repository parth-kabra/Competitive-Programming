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
void Solve(){
    int n;
    cin >> n;
    int dp[n+5]{};
    int arr[n+5]{};
    for(int i =0; i < n;i++){
        cin >> arr[i];
    }
    dp[0] = arr[0];
    dp[1] = arr[1];
    dp[2] = arr[2];
    for(int i=3; i < n;i++){
        dp[i] = arr[i] + min({dp[i-1], dp[i-2], dp[i-3]});
        cerr << dp[i] << " ";
    }
    valarray<int> res = {dp[n-1], dp[n-2], dp[n-3]};
    cout << res.min() << endl;
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