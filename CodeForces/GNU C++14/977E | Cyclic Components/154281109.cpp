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
const int N = 2 * 1e5 + 2;
 
// degree of all the vertices
int degree[N];
 
// to keep track of all the vertices covered
// till now
bool found[N];
 
// all the vertices in a particular
// connected component of the graph
vector<int> curr_graph;
 
// adjacency list
vector<int> adj_list[N];
 
// depth-first traversal to identify all the
// nodes in a particular connected graph
// component
void DFS(int v)
{
    found[v] = true;
    curr_graph.push_back(v);
    for (int it : adj_list[v])
        if (!found[it])
            DFS(it);
}
 
// function to add an edge in the graph
void addEdge(vector<int> adj_list[N], int src,
             int dest)
{
    // for index decrement both src and dest.
    src--, dest--;
    adj_list[src].push_back(dest);
    adj_list[dest].push_back(src);
    degree[src]++;
    degree[dest]++;
}
 
int countSingleCycles(int n, int m)
{
    // count of cycle graph components
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (!found[i]) {
            curr_graph.clear();
            DFS(i);
 
            // traversing the nodes of the
            // current graph component
            int flag = 1;
            for (int v : curr_graph) {
                if (degree[v] == 2)
                    continue;
                else {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1) {
                count++;
            }
        }
    }
    return(count);
}
void Solve(){
    int n, m;
    cin >> n >> m;
    for(int i=0; i < m;i++){
        int u, v;
        cin >> u >> v;
        addEdge(adj_list, u, v);
    }
    cout << countSingleCycles(n , m) << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
 
    int T = 1;
    //cin >> T;
    while(T--){
        Solve();
    }
    return 0;
 
}