#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAX=1e6;
void solve(){
  int t;cin>>t;
  while(t--){
    int a,b,n,ans;cin>>a>>b>>n;
    if(a>b){
      ans=1;
    }else{
      ans=0;
    }
    int res=0;
    while(a<=n && b<=n){
      if(ans%2==0){
        a+=b;
        ans++;
      }
      else{
        b+=a;
        ans++;
      }
      res++;
    }
    cout<<res<<endl;
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