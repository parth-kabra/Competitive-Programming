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
const int BIT = 32;
void lower(string &s){
    for(char &i : s){
        i |= BIT;
    }
}
void Solve(){
    int n;
    cin >> n;
    map<string, int> mp;
    mp["polycarp"]++;
    while(n--){
        string n1,r,n2;
        cin >> n1 >> r >> n2;
        lower(n1);
        lower(n2);
        mp[n1] = mp[n2] + 1;
    }
    int res = 0;
    for(auto it : mp){
        res = max(res,it.second);
    }
    cout << res << endl;
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