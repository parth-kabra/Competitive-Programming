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
const int N = 1e5+5;
bool broke[N];
const int M = 1000000007;
int mem[N];
int memo(int n){
    if(broke[n]) return 0;
    if(n <= 1) return 1;
    if(mem[n] != -1) return mem[n] % M;
    
    return mem[n] = memo(n - 1) + memo(n - 2) % M;
}
void Solve(){
    int n , m;
    cin >> n >> m;
    for(int i=0; i < m;i++){
        int x;
        cin >> x;
        broke[x] = true;
    }
    for(int i=0; i <= n;i++){
        mem[i] = -1;
    }
    cout << memo(n) % M << endl;
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