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
const int N = 1E5 + 5;
vector<int> respect(N, 1LL);
int curr[N];
void Solve(){
    int n;
    cin >> n;
    vector<int> par;
    for(int i=0; i < n;i++){
        int p,c;
        cin >> p >> c;
        par.push_back(p);
        curr[i] = c;
    }
    for(int i=0; i < n;i++){
        if(par[i] > 0){
            respect[par[i] - 1] &= curr[i]; 
        }
    }
 
    vector<int> res;
 
    for(int i=0; i < n;i++){
        if(respect[i] and curr[i]){
            res.push_back(i);
        }
    }
    if(res.empty()){
        cout << -1 << endl;
        return;
    }
    else{
        for(const int &i : res){
            cout << i + 1 << " ";
        }
        cout << endl;
    }
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