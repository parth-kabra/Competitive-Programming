#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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
    int n,m,k;
    cin >> n >> m >> k;
    int x;
    int wash = 0LL;
    while(cin >> x){
        if(x == 1){
            if(!m){
                wash++;
            }
            else{
                m--;
            }
        }
        else{
            if(k){
                k--;
                continue;
            }
            if(m){
                m--;
                continue;
            }
            wash++;
        }
    }    
    cout << wash << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
 
    int t = 1;
    //cin >>t;
    while(t--){
        Solve();
    }
 
    return 0;
}