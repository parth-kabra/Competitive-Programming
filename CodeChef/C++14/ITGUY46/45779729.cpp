/*	 ____                   _     _         _  __          _                    
	|  _ \    __ _   _ __  | |_  | |__     | |/ /   __ _  | |__    _ __    __ _ 
	| |_) |  / _` | | '__| | __| | '_ \    | ' /   / _` | | '_ \  | '__|  / _` |
	|  __/  | (_| | | |    | |_  | | | |   | . \  | (_| | | |_) | | |    | (_| |
	|_|      \__,_| |_|     \__| |_| |_|   |_|\_\  \__,_| |_.__/  |_|     \__,_|
	                                                                            
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define str string
#define f first
#define vec vector
void solve(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int sum=0;
		int sum1=0;
		for(int i=1;i<=n;i++){
			sum= sum+i*i;
		}
		for(int i=1;i<n;i++){
			sum1 = sum1+i*i;
		}
		cout<<sum+sum1<<endl;
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