#include <bits/stdc++.h>
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
const int N= (2 * 1e5) + 2;
int dp[N][32];
int32_t main(){
    usaco();
 
    memset(dp[0], 0, sizeof dp[0]);
    for(int i = 1; i <= N ; i++){
        for(int c = 0; c < 32; c ++){
            dp[i][c] = dp[i-1][c];
        }
        bitset<32> b(i);
        for(int j = 0; j < 32; j++){
            if(b[j] == true){
                dp[i][j]++;
            }
        }
    }
    int t;
    cin >> t;
    while(t--){
        int low,high;
        cin >> low >> high;
        low--;
        int res = INT_MAX;
        for(int i =0; i <32; i++){
            res = min(res, high - low + 1 - dp[high][i] + dp[low][i]);
        }
        cout << --res << endl;
    }
 
    return 0;
}