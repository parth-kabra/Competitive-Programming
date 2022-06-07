#include<bits/stdc++.h>
using namespace std;
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
bool prime(int x){
    if(x <= 1){
        return true;
    }
    for(int i = 2; i * i <= x ;i++){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}
int div(int x){
    int res = 0;
    for(int i = 2; i * i <= x;i++){
        if(x % i == 0){
            res++;
            debug(i)
        }
    }
    return res;
}
void Solve(){
    int q;
    cin >> q;
    set<int> s = {1,2,3, 5, 7, 11};
    while(q--){
        int x;
        cin >> x;
        if(s.find(x) != s.end()){
            cout << -1 << endl;
        }
        else{
            cout << (x / 4) - (x & 1) << endl;
        }
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
 
    int t = 1;
    //cin >> t;
    while(t--){
        Solve();
    }
 
    return 0;
}