/*
		🅿🅰🆁🆃🅷 🅺🅱🆁🅰
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define str string
void solve(){
	int n;cin>>n;
	if(n%4==0){
		cout<<n+1<<endl;
	}
	else{
		cout<<n-1<<endl;
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