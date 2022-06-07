#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
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
vector<int> g[N];
queue<int> q;
int graph[N];
int indegree[N];
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    usaco();

    int n,m;
    cin >> n >> m;
    int x = n + m - 1;
    for(int i =0 ; i < x; i++){
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        indegree[v]++;
    }

    for(int i=1; i <= n;i++){
        if(indegree[i] == 0){
            q.push(i);
            graph[i] = 0;
            break;
        }
    }

    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int u : g[v]){
            indegree[u]--;
            if(indegree[u] == 0){
                graph[u] = v;
                q.push(u);
            }
        }
    }
    for(int i=1; i <= n ;i++){
        cout << graph[i] << endl;
    }

    return 0;
}