#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAX=1e6;
void solve(){
  int a,b;
  cin>>a>>b;
  int res=0;
  while(a<=b){
    a*=3;
    b*=2;
    ++res;
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