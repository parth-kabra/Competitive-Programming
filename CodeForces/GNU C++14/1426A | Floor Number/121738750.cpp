#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int imax=INT_MAX;
const int imin=INT_MIN;
const int mod=1e9+7;
void solve(){
    int t;cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n<=2){
            cout<<"1"<<endl;
        }
        else{
            cout<<(n-3)/x+2<<endl;
        }
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