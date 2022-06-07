/*
		🅿🅰🆁🆃🅷 🅺🅱🆁🅰
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define str string
void solve(){
	int a,b;cin>>a>>b;
	if(a>b){
		cout<<a-b<<endl;
	}
	else{
		cout<<a+b<<endl;
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