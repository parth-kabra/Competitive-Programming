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
 
struct bhai{
    int a, b, c;
    bhai(const int &a, const int &b, const int &c){
        this->a = a;
        this->b = b;
        this->c = c;
    };
};
 
void Solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int &i : arr){
        cin >> i;
    }
    if(is_sorted(arr.begin(), arr.end())){
        cout << 0 << endl;
        return;
    }
    if(arr[n - 2] > arr[n - 1]){
        cout << -1 << endl;
        return;
    }
    vector<bhai> result;
    vector<int> behan;
    for(int i = 0; i < n - 2; i++){
        result.push_back(bhai(i + 1, n - 1, n));
        behan.push_back(arr[n - 2] - arr[n - 1]);
    }
    behan.push_back(arr[n - 2]);
    behan.push_back(arr[n-1]);
 
 
    if(!is_sorted(behan.begin(), behan.end())){
        cout << -1 << endl;
        return;
    }
 
    cout << n - 2 << endl;
    for(const bhai &i : result){
        cout << i.a << " " << i.b << " " << i.c << endl;
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