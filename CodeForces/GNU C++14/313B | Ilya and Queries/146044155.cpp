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
    string s;
    cin >> s;
        
    s += '$';
    
    int dp[s.size() + 1]{};
    for(int i=0; i < s.size();i++){
        dp[i+1] = dp[i] + (s[i] == s[i+1]);
    }
    
    int n;
    cin >> n;
    for(int i =0; i < n;i++){
        int l,r;
        cin >> l >> r;
        cout << dp[r-1] - dp[l-1] << endl;
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