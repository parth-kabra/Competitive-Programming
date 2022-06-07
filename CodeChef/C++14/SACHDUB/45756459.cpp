//   🅿🅰🆁🆃🅷 🅺🅰🅱🆁🅰

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define str string
bool prime(int n){
	for(int i=2;i<n;i++){
		if (n%i==0){
			return false;
		}
	}
	return true;
}
void solve(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int sum=0;
		for(int i=0;i<n;i++){
			sum+= abs(arr[i]-arr[n-1-i]);
		}
		sum=sum/2;
		if(sum==1 || sum==0){
			cout<<"KITKAT"<<endl;
		}
		else if(prime(sum)){
			cout<<"KIT"<<endl;
		}
		else{
			cout<<"KAT"<<endl;
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