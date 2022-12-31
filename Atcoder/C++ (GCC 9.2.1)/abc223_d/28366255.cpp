#include<bits/stdc++.h>
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
signed main() {
    usaco();
 
    int n,m;
    cin >> n >> m;
    vector<int> g[n+1];
    vector<int> indegree(n+1,0);
    for(int i=0; i < m ;i++){
        int u,v;
        cin >> u >> v;
        u--;
        v--;
        g[u].push_back(v);
        indegree[v]++;
    }
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0; i < n;i++){
        if(indegree[i] == 0){
            pq.push(i);
        }
    }
    vector<int> res;
    res.reserve(n);
    while(!pq.empty()){
        int node = pq.top();
        pq.pop();
        res.push_back(node);
        for(int v : g[node]){
            indegree[v]--;
            if(indegree[v] == 0){
                pq.push(v);
            }
        }
    }
    if(res.size() != n){
        cout << -1 << endl;
    }
    else{
        for(int &node : res){
            cout << ++node << " ";
        }
        cout << endl;
    }
    return 0;
}