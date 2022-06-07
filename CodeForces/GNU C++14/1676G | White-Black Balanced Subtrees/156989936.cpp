#include<bits/stdc++.h>
using namespace std;
 
 
/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T> using Set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using Multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
*/
 
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
 
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
 
struct Graph{
 
    vector<vector<int>> g;
    int n;
    vector<bool> vis;
    vector<pair<int,int>> colors;
    map<int,char> color;
    int res = 0;
 
    Graph(const int &n){
        g.resize(n, {});
        this->n = n;
        vis.resize(n, false);
        colors.resize(n, {0, 0});
    };
 
    void add(const int &a, const int &b){
        g[a].push_back(b);
    }
 
    void dfs(int start){
 
        vis[start] = true;
 
        if(color[start] == 'W'){
            colors[start].first++;
        }
        else if(color[start] == 'B'){
            colors[start].second++;
        }
        for(const int &node : g[start]){
            if(!vis[node]){
                dfs(node);
            }
            colors[start].first += colors[node].first;
            colors[start].second += colors[node].second;
        }
        if(colors[start].first == colors[start].second){
            res++;
        }
    }
 
};
void Solve(){
    int n;
    cin >> n;
    vector<int> arr(n - 1);
    for(int &i : arr){
        cin >> i;
        i--;
    }
    Graph g(n + 2);
    string s;
    cin >> s;
    int ptr = 1;
    for(const int &p : arr){
        g.add(p, ptr);
        ptr++;
    }
    for(int i=0; i < n; i++){
        g.color[i] = s[i];
    }
    g.dfs(0);
    cout << g.res << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
 
    int T = 1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
 
}