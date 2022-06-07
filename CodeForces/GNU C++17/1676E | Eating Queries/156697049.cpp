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
void Solve(){
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    map<int,bool> mp;
    for(int &i : arr){
        cin >> i;
        mp[i] = true;
    }
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> ss;
    int s = 0;
    map<int,int> ind;
    for(int i=0; i < n;i++){
        s += arr[i];
        ss.push_back(s);
        ind[s] = i;
    }
    while(q--){
        int x;
        cin >> x;
        if(mp[x]){
            cout << 1 << endl;
            continue;
        }
        auto it = lower_bound(ss.begin(), ss.end(), x);
        if(it == ss.end()){
            cout << -1 << endl;
            continue;
        }
        it = lower_bound(ss.begin(), ss.end(), x);
        cout << ind[*it] + 1 << endl;
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
 
    int T = 1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
 
}