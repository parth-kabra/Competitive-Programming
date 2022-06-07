#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAX=1e6;
void solve(){
    int t;cin>>t;
    while(t--){
      int h,x,y,c;
      cin>>h>>x>>y>>c;
      if((x+y/2)*h<=c){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
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