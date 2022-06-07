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
#define ff 							first
#define vec 						vector
#define naturalNumSum(N)			N*(N+1)/2
#define p(x) 						push(x)
const int mod=  					1e9+7;
#define gcd(a,b) 					__gcd(a,b);
#define lcm(a,b)					a*b/gcd(a,b);
#define pi 							pair
#define ss 							second
#define tc(t)						while(t--)
#define pb(a) 						push_back(a);
#define printVec(v) 				for(int i=0;i<v.size();i++){cout<<v[i]<<" ";}
#define endl 						"\n"
#define db							double
#define clr(a)						a.clear();
#define fl							float
#define umap						unordered_map
#define pub 						public
#define mp							make_pair
#define ins							insert
#define stu 						struct
#define vd 							void
#define null 						NULL
#define ppf							pop_front
#define stk 						stack
#define printArr(v,size)			for(int i=0;i<size;i++){cout<<v[i]<<" ";}
#define printMap(m)					for(auto &v : m){cout<<v.ff<<" "<<v.ss<<endl;}

vd solve(){
	int t;cin>>t;
	tc(t){
		int n;cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		printArr(arr,n);
		cout<<endl;
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