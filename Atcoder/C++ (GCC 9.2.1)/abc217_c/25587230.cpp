#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(s) s.begin(),s.end()
void inversePermutation(ll a[], ll n) {
 
 
  ll a2[n];

  for (int i = 1; i <= n; i++)
    a2[a[i] ] = i ;
 
  for (int i = 1; i <= n; i++)
    cout << a2[i] << " "; 
}
 
void solve(){
     ll n;
     cin>>n;
     ll a[n];
     vector<pair<ll,ll>>v;

     for(int i=1;i<=n;i++){
       cin>>a[i];
       v.push_back({a[i],i});
     }
    inversePermutation(a,n);
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("uttar.txt", "w", stdout);
    #endif
        solve();
    return 0;
}