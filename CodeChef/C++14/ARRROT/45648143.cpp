/*
		 ____                   _     _         _  __          _                    
		|  _ \    __ _   _ __  | |_  | |__     | |/ /   __ _  | |__    _ __    __ _ 
		| |_) |  / _` | | '__| | __| | '_ \    | ' /   / _` | | '_ \  | '__|  / _` |
		|  __/  | (_| | | |    | |_  | | | |   | . \  | (_| | | |_) | | |    | (_| |
		|_|      \__,_| |_|     \__| |_| |_|   |_|\_\  \__,_| |_.__/  |_|     \__,_|

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string

void solve(){
	const int mod=1e9+7;
	ll n,ans;cin>>n;
	ll arr[n];
	ll sum=0;
	for(ll i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
		sum=(sum+mod)%mod;
	}
	sum%=mod;
	cin>>ans;
	ll arr2[ans];
	for(ll i=0;i<ans;i++){
		cin>>arr2[i];
	}
	while(ans--){
		sum=(sum*2)%mod;
		cout<<sum<<endl;
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