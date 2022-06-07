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
const int N = 1e5+5;
int dp[N];
int h[N];
int32_t main(){
    usaco();

    // code here...
    int n;
    cin >> n;
    for(int i = 1; i <= n ;i++){
        cin >> h[i];
    }
    dp[1] = 0;
    int curr = 0;
    for(int i=2; i <= n;i++){
        if(h[i] > h[i-1]){
            curr = 0;
        }
        else{
            curr++;
        }
        dp[i] = max(dp[i-1] , curr);
    }
    cout << *max_element(dp, dp+n+1) << endl;

    return 0;
}