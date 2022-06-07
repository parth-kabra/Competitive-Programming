#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T> using Set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using Multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
const int N = 1e5;
vector<int> pts(N);
int f(int n){
    int res = 0;
    for(int i=2; i * i <= n;i++){
        if(n% i == 0){
            res++;
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n > 1){
        res++;
    }
    return res;
}
void Solve(){
    int a, b, k;
    cin >> a >> b >> k;
    int res = 0;
    for(int i=a; i <= b;i++){
        if(pts[i] == k){
            res++;
        }
    }
    cout << res << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();

    for(int i=2; i <= N;i++){
        pts[i] = f(i);
    }

    int T = 1;
    cin >> T;
    while(T--){
        Solve();
    }

    return 0;
}
