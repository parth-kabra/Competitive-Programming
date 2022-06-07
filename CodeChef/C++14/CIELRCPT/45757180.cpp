//   🅿🅰🆁🆃🅷 🅺🅰🅱🆁🅰

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define str string
void solve(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[]={2048,1024,512,256,128,64,32,16,8,4,2,1};
		int count=0;
		for(int i : arr){
			while(n>=i){
				n=n-i;
				count++;
			}
		}
		cout<<count<<endl;
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