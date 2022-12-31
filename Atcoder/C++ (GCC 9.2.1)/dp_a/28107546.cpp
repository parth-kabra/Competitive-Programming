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
const int N = 1e5+5;
int dp[N];
int arr[N];
int32_t main(){
    usaco();

    int n;
    cin >> n;
    for(int i=1; i <= n;i++){
        cin >> arr[i];
        dp[i] = 1e9;
    }
    dp[1] = 0;
    for(int i=1; i <= n;i++){
        for(int pts : {i+1, i+2}){
            if(pts <= n){
                dp[pts] = min(dp[pts], dp[i] + abs(arr[i] - arr[pts]));
            }
        }
    }

    cout << dp[n] << endl;

    return 0;
}