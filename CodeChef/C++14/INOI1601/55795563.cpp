#include<bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void usaco(string filename = ""){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if(filename.size() > 0){
        #ifndef ONLINE_JUDgE
            freopen((filename + ".in").c_str(), "r", stdin);
            freopen((filename + ".out").c_str(), "w", stdout);
        #endif
    }
    else{
        #ifndef ONLINE_JUDgE
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
            freopen("error.txt", "w", stderr); 
        #endif
    }
}
const int N = 1e5+5;
vector<int> g[N];
vector<bool> visited(N, false);
vector<int> least(N, INT_MAX);
int arr[N];
void dfs(int start){
    least[start] = arr[start];
    for(int node : g[start]){
        dfs(node);
        least[start] = min(least[start], least[node]);
    }
    return;
}
int32_t main(){
    //usaco();
    
    int n;
    cin >> n;

    for(int i=0; i < n;i++){
        cin >> arr[i];
    }
    int p[n];
    int father = INT_MAX;;
    for(int i=0; i < n ;i++){
        cin >> p[i];
        if(p[i] == -1){
            father = i;
            continue;
        }
        p[i]--;
        g[p[i]].push_back(i);
    }
    if(father == INT_MAX){
        cout << -1 << endl;
    }
    else{
        dfs(father);
        int res = 0;
        for(int i=0; i < n ;i++){
            res = max(res, arr[i] - least[i]);
        }
        cout << res << endl;
    }

    return 0;
}