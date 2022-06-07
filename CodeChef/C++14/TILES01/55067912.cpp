#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void usaco(string filename = ""){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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
// ds here...
int32_t main(){
    usaco();

    // code here...
    int n;  
    cin >> n;
    int dp[n+1];
    for(int i=0; i < 4 ;i++){
        dp[i] = i;
    }
    for(int i= 4; i <= n ;i++){
        dp[i] = (dp[i-1] + dp[i-2]) % 15746;
    }
    cout << dp[n] << endl;

    return 0;
}