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
int colors[N];
vector<int> g[N];
map<int,int> c;
struct edge{
    int u,v;
};
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
 
    int n;
    cin >> n;
    vector<edge> edges;
    for(int i =0 ; i < n - 1 ; i++){
        edge e;
        cin >> e.u >> e.v;
        edges.push_back(e);
    }
    for(int i=1; i <= n ;i ++){
        cin >> colors[i];
    }
    int diff = 0;
    for(auto e : edges){
        if(colors[e.u] != colors[e.v]){
            diff++;
            c[e.u]++;
            c[e.v]++;
        }
    }
    // all fucking colors same !
    if(c.empty()){
        cout << "YES" << endl;
        cout << 1 << endl;
        return 0;
    }
    for(auto it : c){
        if(it.second == diff){
            cout << "YES" << endl;
            cout << it.first << endl;
            return 0;
        }
    }
    cout << "NO" << endl; 
 
    return 0;
}