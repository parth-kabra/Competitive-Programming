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
bool dp[105][N];
int arr[105];
int32_t main(){
    usaco();

    int n;
    cin >> n;
    int arr[n];
    int sum =0;
    for(int i=0; i < n ;i++){
        cin >> arr[i];
        sum += arr[i];
    }

    for(int i=0; i <= n;i++){
        dp[i][0] = true;
    }
    for(int i=1; i <= sum ;i++){
        dp[0][i] = false;
    }
    for(int i=1; i <= n;i++){
        for(int j= 1; j <= sum ;j++){
            if(j < arr[i-1]){
                dp[i][j] = dp[i-1][j];
            }
            if (j >= arr[i-1]){
                dp[i][j] = dp[i-1][j] || dp[i-1][j - arr[i-1]];// maximum
            }
        }
    }

    // idiot remember u solved yesterday TWO SETS from cses
    pair<bool,int> res;
    int min_need = ((sum + 1) >> 1);
    for(int i = min_need;i <= sum;i++){
        if(dp[n][i]){
            res.first = true;
            res.second = i;
            break;
        }
    }

    if(res.first){
        cout << res.second << endl;
    }
    else{
        cout << "-1" << endl;
    }

    return 0;
}