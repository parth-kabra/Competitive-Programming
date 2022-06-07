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
const int N = 2 * 1e5+5;
vector<int> dp;
const int INF = 1e9;
void Solve(){
    int n;
    cin >> n;
    dp.resize(n+1);
    int arr[n+1];
    for(int i=1; i <= n;i++){
        cin >> arr[i];
    }
    int ptr = 1;
    for(int i=n;i >= 1; i--){
        ptr = max(ptr - 1, arr[i]);
        dp[i] = ptr > 0;
    }
    for(int i=1; i <= n;i++){
        cout << dp[i ] << " ";
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