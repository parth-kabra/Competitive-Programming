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
struct edge{
    int a, b;
    bool operator<(edge &e){
        return e.b > b;
    }
};
void Solve(){
    int n;
    cin >> n;
    vector<edge> arr(n);
    for(edge &e : arr){
        cin >> e.a >> e.b;
    }
    sort(arr.begin(), arr.end());
    int ranges = 0;
    int mx = -1e18;
    for(edge &e : arr){
        if(e.a > mx){
            ranges++;
            mx = e.b;
        }
    }
    cout << ranges << endl;
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