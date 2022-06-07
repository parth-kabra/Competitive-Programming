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
    int arr[n];
    vector<pair<int,int>> ar;
    for(int i=0; i < n;i++){
        cin >> arr[i];
    }
    for(int i=1; i < n;i++){
        if(abs(arr[i] - arr[i-1]) >= 2){
            cout << "YES" << endl;
            cout << i << " " << i +1 << endl;
            return;
        }
    }
    cout << "NO" << endl;
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