#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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
int k;
vector<int> dp(5000, -1);
vector<int> arr;
void Solve(){
    cin >> k;
    int x;
    while(cin >> x){
        arr.push_back(x);
    }
    dp[0] = 0;
    for(int i=1; i <= k;i++){
        for(const int &coin : arr){
            if(coin <= i){
                if(dp[i - coin] != -1 and dp[i - coin] + 1 > dp[i]){
                    dp[i] = dp[i - coin] + 1;
                }
            }
        }
    }
    cout << dp[k] << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
 
    int t = 1;
    //cin >>t;
    while(t--){
        Solve();
    }
 
    return 0;
}