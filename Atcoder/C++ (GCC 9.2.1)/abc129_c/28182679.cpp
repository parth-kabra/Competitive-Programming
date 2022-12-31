#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int long long
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void usaco(string filename = ""){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
const int N = 1e6+5;
int dp[N];
int32_t main(){
    usaco();

    int n;
    cin >> n;
    dp[1] = dp[2] = 0;
    dp[3] = 1;
    for(int i = 4; i <= n;i++){
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % 10007;
    }
    cout << dp[n] << endl;

    return 0;
}