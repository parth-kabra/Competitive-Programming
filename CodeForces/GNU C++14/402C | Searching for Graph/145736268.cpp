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
const int N= 25;
vector<pair<int,int>> g;
int par = 1;
int last = 2;
int n,p;
void f(){
    int k = 2 * n + p;
    for(int i=1; i <= n && k > 0 ; i++){    
        for(int j = i + 1; j <= n and k > 0;j++){
            g.push_back({i,j});
            k--;
        }
    }
}
void Solve(){
    cin >> n >> p;
    f();
    for(auto it : g){
        cout << it.first << " " << it.second << endl;
    }
    g.clear();
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