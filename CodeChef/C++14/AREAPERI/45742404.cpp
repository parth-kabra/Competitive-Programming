/*
		🅿🅰🆁🆃🅷 🅺🅱🆁🅰
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define str string
int p(int l,int b){
	return 2*(l+b);
}
int a(int l,int b){
	return l*b;
}
void solve(){
	int l,b;cin>>l>>b;
	if (p(l,b)>a(l,b)){
		cout<<"Peri"<<endl;
	}
	else if(p(l,b)<a(l,b)){
		cout<<"Area"<<endl;
	}
	else{
		cout<<"Eq"<<endl;
	}
	if (p(l,b)>a(l,b)){
		cout<<p(l,b)<<endl;
	}
	else if(p(l,b)<a(l,b)){
		cout<<a(l,b)<<endl;
	}
	else{
		cout<<a(l,b)<<endl;
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