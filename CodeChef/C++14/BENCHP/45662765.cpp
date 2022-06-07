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
	ll t;cin>>t;
	while(t--){
		ll n,w,r;
		cin>>n>>w>>r;
		w-=r;
		vector<ll>arr(n);
		for(auto &i:arr){
		 	cin>>i;
		}
		sort(arr.begin(),arr.end());
		for(int i=0;i<n-1;i++){
		  	if(arr[i]==arr[i+1]){
		  		w-=(arr[i]+arr[i+1]); i++;
		  	}
		}
		if(w>0){
		  	cout<<"NO"<<endl;
		}
		else{
		  	cout<<"YES"<<endl;
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