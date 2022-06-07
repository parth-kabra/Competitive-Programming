#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
void solve(){
	ll n;cin>>n;
	int max=0;
	for(int i=1;i<=10;i++){
		if(n%i==0){
			max=i;
		}
	}
	cout<<max<<endl;
}
int main(){
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	   solve();
	return 0;
}