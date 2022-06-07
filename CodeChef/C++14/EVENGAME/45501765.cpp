#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
void solve(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int even=0;
		int odd=0;
		for(int j : arr){
			if ((j^1)!=j+1){
				odd++;
			}
			else{
				even++;
			}
		}
		if (odd%2==0){
			cout<<1<<endl;
		}
		else{
			cout<<2<<endl;
		}
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	   solve();
	return 0;
}