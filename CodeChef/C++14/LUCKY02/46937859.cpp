#include <bits/stdc++.h>
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
using namespace std;
#define int 						long long
#define str 						string
#define ff 							first
#define vec 						vector
#define naturalNumSum(N)			N*(N+1)/2
#define p(x) 						push(x)
const int mod=  					1e9+7;
#define gcd(a,b) 					__gcd(a,b);
#define lower(string)				tolower(string)
#define lcm(a,b)					a*b/gcd(a,b);
#define pi 							pair
#define ss 							second
#define tc(t)						while(t--)
#define pb(a) 						push_back(a);
#define endl 						"\n"
#define db							double
#define clr(a)						a.clear();
#define fl							float
#define del 						delete
#define umap						unordered_map
#define mp							make_pair
#define ins							insert
#define stu 						struct
#define emp(s)						s.empty()
#define vd 							void
#define null 						NULL
#define cin(a)						cin>>a;
#define input(v,n)					for(int i=0;i<n;i++){int m;cin(m);v.pb(m);}
#define ppf							pop_front
#define elif						else if
#define stk 						stack
#define len(string)					string.length()
#define print(a)					cout<<a<<endl;
#define lb							lower_bound
#define ub							upper_bound
#define uset						unordered_set
#define sz(v)						v.size()
#define printArr(arr)				for(auto &i : arr){cout<<i<<" ";}cout<<endl;
#define printMap(m)					for(auto &v : m){cout<<v.ff<<" "<<v.ss<<endl;}
vd solve(){
	int t;cin>>t;
	tc(t){
		str s;cin>>s;
		set<char> Ss;
		for(char &i : s){
			Ss.ins(i);
		}
		bool f=true;
		for (char i : Ss){
			if(i=='3' || i=='7'){
				continue;
			}
			else{
				print("BETTER LUCK NEXT TIME")
				f=false;
				break;
			}
		}
		if(f){
			print("LUCKY")
		}
	}
}
int32_t main(){
	ios_base::sync_with_stdio(false);
   	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	   solve();
	return 0;
}