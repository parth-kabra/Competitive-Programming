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
const int N = 500;
vector<int> g[N];
vector<int> visited(N, 0);
void dfs(int start){
    visited[start] = 1;
    for(int node : g[start]){
        if(visited[node] == 0){
            dfs(node);
        }
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    usaco();
        
    int n,k;
    cin >> n >> k;
    vector<vector<int>> ar(n+1);
    for(int i= 0 ; i < n ;i++){
        int m;
        cin >> m;
        ar[i].resize(m);
        for(int &i : ar[i]) cin >> i;
        sort(ar[i].begin(), ar[i].end());
    }

    for(int i=0; i < n ;i++){
        for(int j = 0 ; j < n ;j++){
            int cnt = 0;
            for(int &node : ar[i]){
                if(binary_search(ar[j].begin(), ar[j].end(), node)){
                    cnt++;
                }
            }
            if(cnt >= k){
                g[i].push_back(j);
            }
        }
    }

    dfs(0);
    int cc = count(visited.begin(), visited.end(), 1);
    cout << cc << endl;

    return 0;
}