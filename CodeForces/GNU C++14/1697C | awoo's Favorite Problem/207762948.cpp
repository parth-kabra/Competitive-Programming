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
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    if(s == t){
        cout << "YES" << endl;
        return;
    }
    if(n == 1){
        cout << "NO" << endl;
        return;
    }
 
    string a, b;
    for(int i =0; i < n ;i++){
        if(s[i] != 'b') a += s[i];
        if(t[i] != 'b')  b += t[i];
    }
    if(a != b){
        cout << "NO" << endl;
        return;
    }
    vector<int> a1, a2;
    for(int i =0; i < n ;i++){
        if(s[i] == 'a'){
            a1.push_back(i);
        }
        if(t[i] == 'a'){
            a2.push_back(i);
        }
    }
    for(int i = 0; i < a1.size() ;i++){
        if(a1[i] > a2[i]){
            cout << "NO" << endl;
            return;
        }
    }
    vector<int> c1, c2;
    for(int i=0; i < n ;i++){
        if(s[i] == 'c'){
            c1.push_back(i);
        }
        if(t[i] == 'c'){
            c2.push_back(i);
        }
    }
    for(int i =0; i < c1.size(); i++){
        if(c1[i] < c2[i]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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