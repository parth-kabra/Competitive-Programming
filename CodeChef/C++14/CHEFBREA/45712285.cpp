/*
		 ____                   _     _         _  __          _                    
		|  _ \    __ _   _ __  | |_  | |__     | |/ /   __ _  | |__    _ __    __ _ 
		| |_) |  / _` | | '__| | __| | '_ \    | ' /   / _` | | '_ \  | '__|  / _` |
		|  __/  | (_| | | |    | |_  | | | |   | . \  | (_| | | |_) | | |    | (_| |
		|_|      \__,_| |_|     \__| |_| |_|   |_|\_\  \__,_| |_.__/  |_|     \__,_|

*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define str string
void solve(){	
	int t;cin>>t;
	while(t--){
		int a,b;cin>>a>>b;
		int GCD=__gcd(a,b);
		int w=a/GCD;
		int l=b/GCD;
		cout<<w*l<<endl;
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