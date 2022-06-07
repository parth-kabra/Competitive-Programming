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
const int N = 1e5+5;
int dp[N];
void Solve(){
    int n,m,k;
    cin >> n >> m >> k;
    set<pair<int,int>> ds;
    for(int i=1; i <= m;i++){
        ds.insert({0, i});
    }
    for(int i = 0; i < n;i++){
        int x;
        cin >> x;
        auto it = *ds.begin();
        ds.erase(it);
        dp[i] = it.second;
        ds.insert({it.first + x , it.second});
    }
    cout << "YES" << endl;
    for(int i =0 ; i <n ;i++){
        cout << dp[i] << " " ;
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