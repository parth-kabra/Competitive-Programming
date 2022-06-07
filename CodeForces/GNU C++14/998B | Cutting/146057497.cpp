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
int mp[2];
void Solve(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i < n;i++){
        cin >> arr[i];
    }
    multiset<int> posibility;
    for(int i= 0 ; i < n;i++){
        mp[arr[i] & 1]++;
        if(mp[0] == mp[1]){
            posibility.insert(abs(arr[i+1] - arr[i]));
        }
    }
    int res = 0;
    for(const int &i : posibility){
        if(i > k) break;
        res++;
        k-=i;
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