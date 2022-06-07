#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAX=1e6;
void solve(){
 int t;cin>>t;
 int res=0;
 while(t--){
  int a,b,c;
  cin>>a>>b>>c;
  if(a+b+c >= 2) res++;
 }
 cout<<res<<endl;
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