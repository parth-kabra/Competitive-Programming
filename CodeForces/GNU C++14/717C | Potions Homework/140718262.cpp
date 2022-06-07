#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int long long
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void usaco(string filename = ""){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
const int M = 10007;
int dp[N];
int32_t main(){
    usaco();
 
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i < n ;i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int res = 0;
    for(int i=0; i < n ;i++){
        res = (res + (arr[i] * arr[n-i-1])) % M;
    } 
    cout << res << endl;
 
    return 0;
}