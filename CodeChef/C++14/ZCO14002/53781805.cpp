#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void IO(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);freopen("error.txt", "w", stderr); 
    #endif
}
//INORDER(L,Root,R)
//PREORDED(Root,L,R)
//POSTORDER(L,R,Root) 
int32_t main(){
    IO();

    int n;
    cin >> n;
    int arr[n], dp[n+1];
    for(int i=0; i < n ;i++){
        cin >> arr[i];
    }
    dp[0] = arr[0];
    dp[1] = arr[1];
    dp[2] = arr[2];

    for(int i=3; i < n ; i++){
        dp[i] = arr[i] + min({dp[i-1], dp[i-3], dp[i-2]});
    }
    for(int i=0; i < n ;i++){
        cerr << dp[i] << " ";
    }
    cout << min({dp[n-1], dp[n-2], dp[n-3]}) << endl;

    return 0;
}