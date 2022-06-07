#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
#define mod 1000000007
void solve(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int arr[n];
		ll ans=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			ans+=arr[i];
		}
		if(ans%k==0){
			cout<<0<<endl;
		}
		else{
			cout<<1<<endl;
		}
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	   solve();
	return 0;
}