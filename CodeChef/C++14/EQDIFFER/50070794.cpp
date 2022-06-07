#include<bits/stdc++.h>
using namespace std;
#define int long long
const int imax=(1LL<<31)-1;
const int imin=-2147483648;
const int mod=1e9+7;
const int N=1e5+10;
void solve(){
    int high=0;
    int n;
    cin>>n;
    map<long long ,int> m;
    for(int i=0;i<n;i++){
        long long  x;
        cin>>x;
        m[x]++;
        high=max(high,m[x]);
    }
    int ans=0;
    if(n>2){
        if(high==1) ans=n-2;
        else ans=n-high;
    }
    cout<<ans<<endl;
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("op.txt", "w", stdout);
    #endif
        int t;
        cin>>t;
        while(t--){
            solve();
        }
    return 0;
}