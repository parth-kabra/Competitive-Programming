/*
	 ____                   _     _         _  __          _                    
	|  _ \    __ _   _ __  | |_  | |__     | |/ /   __ _  | |__    _ __    __ _ 
	| |_) |  / _` | | '__| | __| | '_ \    | ' /   / _` | | '_ \  | '__|  / _` |
	|  __/  | (_| | | |    | |_  | | | |   | . \  | (_| | | |_) | | |    | (_| |
	|_|      \__,_| |_|     \__| |_| |_|   |_|\_\  \__,_| |_.__/  |_|     \__,_|
	                                                                            
*/
#include <bits/stdc++.h>
using namespace std;
#define int 						long long
#define str 						string
#define f 							first
#define vec 						vector
#define sumofNnaturalNum(N)			N*(N+1)/2
#define p(x) 						push(x)
#define TIE 						cin.tie(NULL)
const int mod=  					1e9+7;
#define IOS 						ios_base::sync_with_stdio(false);
#define gcd(a,b) 					__gcd(a,b);
#define pi 							pair
#define s 							second
#define pb(a) 						push_back(a);
#define printVec(v) 				for(int i=0;i<v.size();i++){cout<<v[i]<<" ";}
#define endl 						"\n"
void solve(){
	int t;cin>>t;
	while(t--){
		int a,b,n;cin>>a>>b>>n;
		if(n%2==0){
			cout<<max(a,b)/min(a,b)<<endl;
		}
		else{
			a*=2;
			cout<<max(a,b)/min(a,b)<<endl;
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