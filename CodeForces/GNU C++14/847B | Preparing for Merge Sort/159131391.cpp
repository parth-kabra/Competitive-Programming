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
void put(vector<vector<int>> &res, int n, int k){
    int low = 0;
    int high = n - 1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        const int &b = res[mid].back();
        ((k > b) ? high = mid - 1 : low = mid + 1);
    }
    ((low >= n) ? res.push_back({k}) : res[low].push_back(k));
}
void Solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int &i : arr){
        cin >> i;
    }
 
    if(is_sorted(arr.begin(), arr.end())){
        for(const int &i : arr){
            cout << i << " ";
        }
        cout << endl;
        return;
    }
 
    if(is_sorted(arr.rbegin(), arr.rend())){
        for(const int &i : arr){
            cout << i << endl;
        }
        return;
    }
 
    vector<vector<int>> res;
    for(int i=0; i < n;i++){
        if(i == 0){
            res.push_back({arr[i]});
            continue;
        }
        put(res, res.size(), arr[i]);
    }
    for(int i=0; i < res.size(); i++){
        for(const int &x : res[i]){
            cout << x << " ";
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