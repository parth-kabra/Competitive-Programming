#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int long long
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void usaco(string filename = ""){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
const int inf = 1e9+10;
vector<pair<int,int>> g[N];
vector<int> dist(N, inf);
int32_t main(){
    usaco();

    int n,m;
    cin >> n >> m;
    for(int i =0; i < m ;i++){
        int u,v;
        cin >> u >> v;

        // removing self loops
        if(u == v){
            continue;
        }

        g[u].push_back({v,0});
        g[v].push_back({u,1});        
    }

    deque<int> d;
    d.push_back(1);
    dist[1] = 0;
    while(!d.empty()){
        int curr = d.front();
        d.pop_front();

        for(auto child : g[curr]){
            int childv = child.first;
            int wt = child.second;
            if(dist[curr] + wt < dist[childv]){
                dist[childv] = dist[curr] + wt;
                if(wt == 1){
                    d.push_back(childv);
                }
                else{
                    d.push_front(childv);
                }
            }
        }
    }

    if(dist[n] == inf){
        cout << -1 << endl;
    }
    else{
        cout << dist[n] << endl;
    }

    return 0;
}