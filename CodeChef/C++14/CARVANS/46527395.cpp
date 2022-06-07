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
#define lcm(a,b)					a*b/gcd(a,b);
#define pi 							pair
#define ss 							second
#define tc(t)						while(t--)
#define pb(a) 						push_back(a);
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
#define len(string)					string.length()
#define print(a)					cout<<a<<endl;
#define lb							lower_bound
#define uub							upper_bound
#define printArr(arr)				for(auto &i : arr){cout<<i<<" ";}
#define printMap(m)					for(auto &v : m){cout<<v.ff<<" "<<v.ss<<endl;}

vd solve(){
	int t;cin>>t;
	tc(t){
		int n;cin>>n;
		vec<int> v;
		for(int i=0;i<n;i++){
			int m;cin>>m;
			v.pb(m);
		}
		int cnt=1;
		int b=v[0];
		for(int i=1;i<n;i++){
			if(v[i]<b){
				b=v[i];
				cnt++;
			}
		}
		cout<<cnt<<endl;
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