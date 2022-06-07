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
void printVec(vec<int> v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
void solve(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vec<int> v;
		for(int i=0;i<n;i++){
			int m;cin>>m;
			v.push_back(m);
		}
		sort(v.begin(), v.end());
		for(int i=0;i<n;i++){
			if(v[i]==1){
				cout<<i<<endl;
				break;
			}
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