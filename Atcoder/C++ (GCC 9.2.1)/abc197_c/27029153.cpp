#include<bits/stdc++.h>
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
const int N = 50;
int dp[N];
int f(int n){
    if(dp[n] != -1){
        return dp[n];
    }
    if(n <= 2){
        return 1;
    }
    return dp[n] = f(n-1) + f(n-2);
}
int32_t main(){
    IO();
    /*for(int i =0 ; i <= 50 ; i++){
        dp[i] = -1;
    }

    int n;
    cin >> n;

    cout << f(n) << endl;*/
    
    /*auto f1 = [&] (vector<int> arr, int n){
        int temp = arr[0];
        for(int i =1 ;i < n ;i++){
            temp ^= arr[i];
        }
        return temp;
    };*/

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i < n;i++){
        cin >>arr[i];
    }
    int res = INT_MAX;
    for(int mask = 0; mask < (1 << n - 1); mask++){
        int curr = 0;
        int tot = 0;
        for(int i=0; i < n ;i++){
            curr |= arr[i];
            if(mask & (1 << i)){
                tot ^= curr;
                curr = 0;
            }
        }
        tot ^= curr;
        res = min(res , tot);
    }
    cout << res << endl;

    return 0;   
}