/*
		🅿🅰🆁🆃🅷 🅺🅱🆁🅰
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define str string
void solve(){
	str n;cin>>n;
	int s=n.length();
	if(s==1){cout<<1<<endl;}
	else if(s==2){cout<<2<<endl;}
	else if(s==3){cout<<3<<endl;}
	else{cout<<"More than 3 digits"<<endl;}
}
int32_t main(){
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	   solve();
	return 0;
}