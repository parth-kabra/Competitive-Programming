#include<bits/stdc++.h>
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
const int N = (3 * 1e5) + 5;
int dp[N];
int arr[N];
int32_t main(){
    usaco();
 
    int n;
    cin >> n;
    int sum = 0;
    for(int i=0; i < n;i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(int i=0; i < n ;i++){
        sum += (arr[i] * (i+2));
    }
    cout << sum - arr[n-1] << endl;
 
    return 0;
}