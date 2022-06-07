#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
#define endl '\n'
template<typename T> using Set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void usaco(string filename = ""){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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
 
// ds here...
int32_t main(){
    usaco();
 
    // code here...
    int n,x,y;
    cin >> n >> x >> y;
        int one = (n >> 1);
        bool F = ((x == one) || (x == one+1));
        bool F1 = ((y == one) || (y == one+1));
        if(F && F1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
 
    return 0;
}