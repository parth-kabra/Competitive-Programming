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
int lcm(int a, int b){
    return (a / __gcd(a,b)) * b;
}
void Solve(){
    int n;
    cin >> n;
    int arr[n];
    int mx = 0;
    map<int,int> mp;
    for(int i=0; i < n;i++){
        cin >> arr[i];
        mx = max(mx, arr[i]);
        mp[arr[i]]++;
    }
    cout << mx << " ";
    int res = 0;
    for(auto it : mp){
        if(it.second > 1 or mx % it.first){
            res = max(res, it.first);
        }
    }
    cout << res << endl;
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