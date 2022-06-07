#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
// set
template<typename T> using Set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// multiset
template<typename T> using Multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// map
template<class key, class value, class cmp = less<key>> using Map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
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
vector<int> g[N];
int least[N];
int depth[N];
int arr[N];
void dfs(int start){
    least[start] = arr[start];
    for(int node : g[start]){
        dfs(node);
        least[start] = min(least[node], least[start]);
    } 
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    usaco();
        
    int n;
    cin >> n;
    for(int i=0; i < n;i++){
        cin >> arr[i];
    }
    int root = INT_MAX;
    int p[n+1];
    for(int i=0; i < n;i++){
        cin >> p[i];
        if(p[i] == -1){
            root = i;
            continue;
        }
        p[i]--;
        g[p[i]].push_back(i);
    }
    dfs(root);
    int res = INT_MIN;
    for(int i=0; i < n ;i++){
        res = max(res, arr[i] - least[i]);
    }
    cout << res << endl;

    return 0;
}