#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int MAX=1e6;
const int mod=1e9+7;
void solve(){
    int t;cin>>t;
    while(t--){
        int h,m;
        cin>>h>>m;
        cout<<1440-(60*h)-m<<endl;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        solve();
    return 0;
}