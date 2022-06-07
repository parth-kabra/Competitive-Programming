#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAX=1e6;
void solve(){
	int t;cin>>t;
	while(t--){
		int d,x,y,z;
		cin>>d>>x>>y>>z;
		cout<<max(7*x,d*y+(7-d)*z)<<endl;
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