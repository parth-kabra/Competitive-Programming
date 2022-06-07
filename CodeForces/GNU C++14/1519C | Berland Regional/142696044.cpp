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
    int u[n];
    int s[n];
    for(int i=0; i < n ;i++){
        cin >> u[i];
    }
    // prefix sum for all the universites;
    map<int,vector<int>> mp;
    for(int i=0; i < n ;i++){
        cin >> s[i];
        mp[u[i]].push_back(s[i]);
    }
    vector<int> prefix(n+1);
    for(auto it : mp){
        vector<int> &dp = it.second;
        sort(dp.begin(), dp.end(), greater<int>());
        int sz = dp.size();
        for(int i=sz -2 ; i >= 0; i --){
            dp[i] += dp[i+1];
        }
        for(int i=1; i <= sz;i++){
            if(sz % i){
                prefix[i] += dp[0] - dp[sz - sz%i];
            }
            else{
                prefix[i] += dp[0];
            }
        }
    }
    for(int i = 1; i <= n ;i++){
        cout << prefix[i] << " ";
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