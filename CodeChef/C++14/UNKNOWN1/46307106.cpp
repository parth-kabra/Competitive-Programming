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
#define naturalNumSum(N)			N*(N+1)/2
#define p(x) 						push(x)
const int mod=  					1e9+7;
#define gcd(a,b) 					__gcd(a,b);
#define pi 							pair
#define s 							second
#define tc(t)						while(t--)
#define pb(a) 						push_back(a);
#define printVec(v) 				for(int i=0;i<v.size();i++){cout<<v[i]<<" ";}
#define endl 						"\n"
#define db							double
#define vecSum(v)					int sum=0;for(int i=0;i<v.size();i++){sum+=v[i];}cout<<sum<<endl;
#define printArr(v,size)			for(int i=0;i<size;i++){cout<<v[i]<<" ";}
void solve(){
	db a,b;cin>>a>>b;
	cout << fixed << setprecision(1) << a+b<<endl;
	cout << fixed << setprecision(1) << a-b<<endl;
	cout << fixed << setprecision(1) << a*b<<endl;
	cout << fixed << setprecision(1) << a/b<<endl;
}
int32_t main(){
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	   solve();
	return 0;
}