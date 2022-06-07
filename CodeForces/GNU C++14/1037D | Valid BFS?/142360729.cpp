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
map<int, vector<int>> tree;
map<int,bool> visited;
bool valid_bfs(vector<int> &v){
    int n = v.size();
    queue<set<int>> q;
    set<int> s;
    s.insert(1);
    q.push(s);
    int i = 0 ;
    while(!q.empty() && i < n){
        if(visited[v[i]]){
            return false;
        }
        visited[v[i]] = true;
        if(q.front().empty()){
            q.pop();
        }
        if(q.front().find(v[i]) == q.front().end()){
            return false;
        }
        s.clear();
        for(auto j : tree[v[i]]){
            if(visited[j]){
                continue;
            }
            s.insert(j);
        }
        if(!s.empty())
            q.push(s);
        s.clear();
        q.front().erase(v[i]);
        i++;
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
        
    int n;
    cin >> n ;
    for(int i=0; i < n-1; i ++){
        int u,v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
 
    vector<int> res(n);
    for(int i=0; i < n;i++){
        cin >> res[i];
    }
    if(valid_bfs(res)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
 
    return 0;
}