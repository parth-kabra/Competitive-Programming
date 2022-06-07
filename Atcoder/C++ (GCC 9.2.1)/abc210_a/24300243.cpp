#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int imax=INT_MAX;
const int imin=INT_MIN;
const int mod=1e9+7;
void solve(){
    int n,a,x,y;
    cin>>n>>a>>x>>y;
    int res=1;
    int ans=0;
    for(int i=0;i<n;i++){
        if(res<=a){
            ans+=x;
        }
        else{
            ans+=y;
        }
        res++;
    }
    cout<<ans<<endl;
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
