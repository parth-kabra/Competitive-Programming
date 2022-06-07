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
 
struct node{
    int sum, i, j;
    node(const int &sum, const int &i, const int &j){
        this->sum = sum;
        this->i = i;
        this->j = j;
    }
    node(){
        this->sum = INT_MAX;
    }
    bool operator<(const node &T){
        return T.sum > sum;
    }
    bool operator==(const node &T){
        if(T.sum == sum && T.i == i && T.j == j){
            return true;
        }
        return false;
    }
};
void Solve(){
    int n;
    cin >> n;
    vector<node>arr;
    for(int i=0; i < n;i++){
        int n1;
        cin >> n1;
        int sum = 0LL;
        vector<int> a(n1);
        for(int &x : a){
            cin >> x;
            sum += x;
        }
        for(int j = 0; j < n1; j++){
            arr.push_back(node(sum - a[j], i + 1, j + 1));
        }
    }
    sort(arr.begin(), arr.end());
    n = arr.size();
    for(int i=0; i < n - 1;i++){
        if(arr[i].sum == arr[i+1].sum){
            if(arr[i].i != arr[i + 1].i){
                cout << "YES" << endl;
                cout << arr[i].i << " " << arr[i].j << endl;
                cout << arr[i + 1].i << " " << arr[i + 1].j << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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