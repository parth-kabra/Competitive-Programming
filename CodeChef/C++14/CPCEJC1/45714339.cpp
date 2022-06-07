/*

	JAI SHREE RAM!
	BAJRANGBALI KI JAI!

	AUTHOR - PARTH KABRA

*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define str string
void solve(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int k;cin>>k;
		if(k>=n && k%n==0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
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