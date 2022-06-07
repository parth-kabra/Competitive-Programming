#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vec vector
void ANS(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int ans=0;
		vec<int> arr (n+1,1);
		for(int i=2;i<=n;i++){
			int MOD=m%i;ans+=arr[MOD];
			for(int j=MOD;j<=n;j+=i){
				arr[j]++;
			}
		}
		cout<<ans<<endl;
	}
}
int32_t main(){
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	   ANS();
	return 0;
}