#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAX=1e6;
void solve(){
  int n,m;
  cin>>n>>m;
  if(n>=31){
    cout<<m<<endl;
  }
  else{
    cout<<m%(1<<n)<<endl;
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