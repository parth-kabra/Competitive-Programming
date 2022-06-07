#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
void solve(){
	int t;cin>>t;
	int count=0;
	while(t--){
		int n,k;cin>>n>>k;
		if (n==0){
			cout<<0<<endl;
		}
		else if(n<k){
			cout<<n<<endl;
		}
		else if(k==0){
			cout<<n<<endl;
		}
		else if (n>=k){
			cout<<n%k<<endl;
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