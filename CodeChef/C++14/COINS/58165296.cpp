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
map<int,int> dp;
int f(int n){
    if(dp.find(n) != dp.end()){
        return dp[n];
    }
    return dp[n] = max(n, f(n / 2) + f(n / 3) + f(n / 4));
}
void Solve(){
    int n;
    while(cin >> n){
        cout << f(n) << endl;
    }
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