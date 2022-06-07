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
map<int,int> cnt;
bool cmp(const int &a, const int &b){
    return cnt[a] > cnt[b];
}
void Solve(){
    int n;
    cin >> n;
    vector<int> arr(n + 10);
    for(int i = 1; i <= n ;i++){
        cin >> arr[i];
    }
    bool yes = true;
    for(int i = 1; i <= n;i++){
        if(arr[i] > arr[i - 1] and arr[i] > arr[i + 1]){
            yes = false;
            break;
        }
    }
    if(yes){
        cout << 0 << endl;
        for(int i = 1; i <= n;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }
    arr[0] = arr[n + 1] = 1e9;
    int res = 0;
    for(int i = 1; i <= n;i++){
        if(arr[i] > arr[i - 1] and arr[i] > arr[i + 1]){
            arr[i + 1] = max(arr[i], arr[i + 2]);
            res++;
        }
    }
    cout << res << endl;
    for(int i = 1; i <= n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
 
    int T = 1;
    cin >> T;
    while(T--){
        cnt.clear();
        Solve();
    }
    return 0;
 
}