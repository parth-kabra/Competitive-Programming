#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void IO(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);freopen("error.txt", "w", stderr); 
    #endif
}
//INORDER(L,Root,R)
//PREORDED(Root,L,R)
//POSTORDER(L,R,Root)
const int N = 1e5+5;
vector<int> adj[N];
vector<bool> visited(N,false);
int root[N];
int dfs(int start){
    int path_min = root[start];
    visited[start] = true;
    for(int node : adj[start]){
        if(!visited[node]){
            path_min = min(path_min, dfs(node));
        }
    }
    return path_min;
}
/*
int connected(int n){
    int cnt = 0;
    for(int i=0; i < n; i++){
        if(!visited[i]){
            cnt++, dfs(i);
        }
    }
    return cnt;
}*/
int32_t main(){
    IO();
    int n,m;
    cin >> n >> m;
    int sum =0;
    //int root[n];
    for(int i=0; i < n;i++){
        cin >> root[i];
        sum += root[i];
    }
 
    //set<int> tree;
 
    for(int i=0; i < m;i++){
        int u,v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
        //tree.insert(root[u-1]);
        //tree.insert(root[v-1]);
    }
    // here we dont know the root of rumor and the next 
    // person who is going to spread the rumor... 
    // thus this will transfer to all the people present
    if(m == 0){
        cout << sum << endl;
    }
    else{
        //int cnt = connected(n);
        //debug(cnt);
        //int components = 0;
        //for(int node : tree){
        //    components+=node;
        //}
        //cout << components - cnt << endl;
        int components = 0;
        for(int i =0 ; i < n ; i++){
            if(!visited[i]){
                // add the minimum of the component
                components += dfs(i);
            }
        }
        cout << components << endl;
    }
 
    return 0;
}