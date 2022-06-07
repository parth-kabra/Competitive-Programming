#include <bits/stdc++.h>
using namespace std;
#define int long long
#define str string
void solve(){
	int t;cin>>t;
	const int mod=1e9+7;
	while(t--){
		int q,p;cin>>q>>p;
		if(q>1000){
			int temp=p*q;
			int ans=(10*temp)/100;
			cout<<temp-ans<<endl;
		}
		else{
			cout<<p*q<<endl;
		}
	}
}
int32_t main(){
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	   solve();
	return 0;
}