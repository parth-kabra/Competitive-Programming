#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
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
const int N =(2 * 1e5) + 5;
bool visited[N] = {false};
int s[N];
int t[N];
int dp[N];
int32_t main(){
    usaco();

    // code here...
    int n;
    cin >> n;
    for(int i=0; i < n ; i++){
        cin >> s[i];
    }
    for(int i=0; i < n; i++){
        cin >> t[i];
        dp[i] = t[i];
    }
    for(int i=0; i < (n << 1); i ++){
        t[(i+1) % n] = min(t[i % n] + s[i % n], t[(i+1) % n]);
    }
    for(int i=0; i < n ;i++){
        cout << t[i] << endl;
    }

    return 0;
}