#include <bits/stdc++.h>
using namespace std;
#define int long long
#define str string
void solve(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int a=arr[0];
		int b=arr[1];
		int c=arr[n-2];
		int d=arr[n-1];
		int sum;int sum1;
		sum=a*b+(max(a-b,b-a));
		sum1=c*d+(max(c-d,d-c));
		cout<<max(sum,sum1)<<endl;
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