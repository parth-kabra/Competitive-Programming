#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAX=1e6;
void solve(){
 for(int i=1;i<=5;i++){
  for(int j=1;j<=5;j++){
   int a;cin>>a;
   if(a==1){
    cout<<abs(i-3)+abs(j-3)<<endl;
   }
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