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
// om hanumante namah  
void Solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int &i : arr){
        cin >> i;
    }
    if(n == 1){
        cout << "YES\n1\n1" << endl;
        return;
    }
    set<int> p, q;
    for(int i = 1; i <= n;i++){
        p.insert(i);
        q.insert(i);
    }
    vector<int> a(n + 5, -1), b(n + 5, -1);
    vector<int> res1(n), res2(n);
    for(int i =0 ; i < n;i++){
        if(a[arr[i]] == -1){
            a[arr[i]] = i;
            res1[i] = arr[i];
            p.erase(arr[i]);
        }
        else if(b[arr[i]] == -1){
            b[arr[i]] = i;
            res2[i] = arr[i];
            q.erase(arr[i]);
        }
        else{
            cout << "NO" << endl;
            return;
        }
    }
    for(int i =0; i < n;i++){
        if(a[arr[i]] == i){
            auto it = q.upper_bound(arr[i]);
            if(it == q.begin()){
                cout << "NO" << endl;
                return;
            }
            it = prev(it);
            res2[i] = *it;
            q.erase(*it);
        }
        else if(b[arr[i]] == i){
            auto it = p.upper_bound(arr[i]);
            if(it == p.begin()){
                cout << "NO" << endl;
                return;
            }
            it = prev(it);
            res1[i] = *it;
            p.erase(*it);
        }
    }
    cout << "YES" << endl;
    for(int &i : res1){
        cout << i << " ";
    }
    cout << endl;
    for(int &i : res2){
        cout << i << " ";
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
        Solve();
    }
    return 0;
 
}