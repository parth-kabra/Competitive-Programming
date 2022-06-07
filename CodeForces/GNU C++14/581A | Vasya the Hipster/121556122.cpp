#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int imax=INT_MAX;
const int imin=INT_MIN;
const int mod=1e9+7;
void solve(){
    int a,b;
    cin>>a>>b;
    vector<int> res;
    cout<<min(a,b)<<" "<<max((a-min(a,b))/2,(b-min(a,b))/2)<<endl;
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