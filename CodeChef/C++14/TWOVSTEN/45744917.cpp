#include <bits/stdc++.h>
using namespace std;
#define int long long
#define str string
void solve(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		if(n%10==0){
			cout<<0<<endl;
		}
		else if(n%5==0){
			cout<<1<<endl;
		}
		else{
			cout<<"-1"<<endl;
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