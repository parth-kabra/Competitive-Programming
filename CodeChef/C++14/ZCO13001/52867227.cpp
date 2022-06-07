#include<bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("uttar.txt", "w", stdout); 
        freopen("error.txt", "w", stderr);
    #endif
	
    // code here...

    int n;
    cin>>n;
    int arr[n];
    for(int  i =0 ; i < n ; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int res = 0;
    for(int i = n-1;i>=0;i--){
        res += i *arr[i] - (n-1-i) * arr[i];
    }
    cout<<res<<endl;
	return 0;
}