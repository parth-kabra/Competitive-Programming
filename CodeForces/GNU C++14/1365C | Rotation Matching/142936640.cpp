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
    int arr[n+1];
    map<int,int> pos;
    for(int i=1; i <= n;i++){
        cin >> arr[i];
        pos[arr[i]] = i;
    }
    int brr[n+1];
    for(int i=1; i <= n;i++){
        cin >> brr[i];
    }
    map<int,int> mp;
    for(int i =1; i <= n;i++){
        int curr = pos[brr[i]] - i;
        if(curr < 0){
            curr += n;
        }
        mp[curr]++;
    }
    int res = 0;
    for(auto it : mp){
        res = max(res, it.second);
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