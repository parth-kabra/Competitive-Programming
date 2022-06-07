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
int32_t main(){
    usaco();

    // code here...

    int n;
    cin >> n;
    int arr[n];
    int sum = 0LL;
    for(int i=0; i < n;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    int dp[n];
    dp[0] = arr[0];
    dp[1] = arr[1];
    dp[2] = arr[2];

    for(int i=3; i < n;i++){
        dp[i] = (arr[i] + min({dp[i-1], dp[i-2], dp[i-3]}));
    }
    cout << sum - min({dp[n-1], dp[n-2], dp[n-3]}) << endl;

    return 0;
}