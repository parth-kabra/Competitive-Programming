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
const int N = 2010;
const int M = 1e9+7;
int dp[N];
int32_t main(){
    usaco();

    int n;
    cin >> n;

    // if sum if zero (we can always choose an empty sequence)
    dp[0] = 1;

    // as the numbers should be >= 3 {1,2} cannot create the sum
    dp[1] = dp[2] = 0;

    for(int i=3; i <= n ;i++){
        dp[i] += (dp[i-1] + dp[i-3]) % M;
    }
    cout << dp[n] << endl;

    return 0;
}