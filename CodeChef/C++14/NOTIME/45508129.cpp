#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
void solve(){
	int n,h,x;cin>>n>>h>>x;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int count=0;int no=0;
	for(int j : arr){
		if (x+j==h){
			count++;
		}
		else{
			no++;
		}
	}
	if(count>0){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
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