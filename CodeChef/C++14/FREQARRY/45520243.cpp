#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
#define mod 1000000007
void solve(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int count=0;
		for(int j=0;j<n;j++){
			for(int k=j+1;k<n;k++){
				if(arr[j]==arr[k]){
					count++;
				}
			}
		}
		if (count==0){
			cout<<"prekrasnyy"<<endl;
		}
		else{
			cout<<"ne krasivo"<<endl;
		}
	}
}
int main(){
	   solve();
	return 0;
}