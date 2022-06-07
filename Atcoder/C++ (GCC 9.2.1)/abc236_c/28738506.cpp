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
map<string,bool> vis;
void Solve(){
    int n,m;
    cin >> n >> m;
    string arr[n];
    for(int i =0; i < n;i++){
        cin >> arr[i];
    }
    for(int i=0; i < m;i++){
        string s;
        cin >> s;
        vis[s] = true;
    }
    for(int i=0; i < n;i++){
        if(vis[arr[i]]){
            cout <<"Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
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