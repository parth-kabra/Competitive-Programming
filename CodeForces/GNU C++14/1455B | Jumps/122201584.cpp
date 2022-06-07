#include<bits/stdc++.h>
using namespace std;
//#define int long long int
#define endl "\n"
const int imax=INT_MAX;
const int imin=INT_MIN;
const int mod=1e9+7;
int power(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
void solve(){
    int n;
    cin>>n;
    int moves=0;
    while(moves*(moves+1)<2 * n){
        moves++;
    }
    if(moves*(moves+1)/2 == n+1){
        moves++;
    }
    cout<<moves<<endl;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        int t;
        cin>>t;
        while(t--){
            solve();
        }
    return 0;
}