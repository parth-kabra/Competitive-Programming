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
const int N = 1e5+5;
int dp[N];
const int M= 1e9+7;
map<int,bool> vis;
int32_t main(){
    usaco();

    int n,m;
    cin >> n >> m;
    for(int i= 0; i < m;i++){
        int x;
        cin >> x;
        vis[x] = true;
    }

    dp[0] = dp[1] = 1;
    for(int i=2; i <= n;i++){
        for(int coin : {i-1, i-2}){
            if(!vis[coin]){
                dp[i] = (dp[i] + dp[coin]) % M;
            }
        }
    }
    cout << dp[n] << endl;

    return 0;
}