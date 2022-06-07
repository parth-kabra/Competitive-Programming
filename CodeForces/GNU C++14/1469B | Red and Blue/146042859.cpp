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
    vector<int> ar(n);
    cin >> ar[0];
    int a = ar[0];
    for(int i=1; i < n;i++){
        cin >> ar[i];
        ar[i] += ar[i-1];
        a = max(a, ar[i]);
    }
    int m;
    cin >> m;
    vector<int> br(m);
    cin >> br[0];
    int b = br[0];
    for(int i=1; i < m;i++){
        cin >> br[i];
        br[i] += br[i-1];
        b = max(b, br[i]);
    }
    cout << max(0LL,a) + max(0LL, b) << endl;
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