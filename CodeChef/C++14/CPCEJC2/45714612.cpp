/*

	JAI SHREE RAM!
	BAJRANGBALI KI JAI!

	AUTHOR - PARTH KABRA

*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define str string
void solve(){
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cout<<arr[n-1]<<" "<<arr[0]<<endl;
}
int32_t main(){
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	   solve();
	return 0;
}