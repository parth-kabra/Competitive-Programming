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
		str s;
		getline(cin>>ws,s);
		reverse(s.begin(), s.end());
		cout<<s<<endl;
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