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
const int MOD = 1e9+7;
int32_t main() {
    usaco();

  int n,a,b; cin >> n >> a >> b;
  --a,--b;
  int m; cin >> m;
  vector<vector<int>> to(n);
  while(m--){
    int x,y; cin >> x >> y;
    --x, --y;
    to[x].push_back(y);
    to[y].push_back(x);
  }
  vector<int> ans(n); ans[a] = 1;
  vector<int> dist(n,-1); dist[a] = 0;
  deque<int> dq; dq.push_front(a);
  while(!dq.empty()){
    int now = dq.front(); dq.pop_front();
    for(int next : to[now]){
      if(dist[next] == -1){
        dist[next] = dist[now] + 1;
        dq.push_back(next);
        ans[next] += ans[now];
      }else if(dist[now]+1 == dist[next]) ans[next] += ans[now];
    }
  }
  cout << ans[b] % MOD << endl;

    return 0;
}