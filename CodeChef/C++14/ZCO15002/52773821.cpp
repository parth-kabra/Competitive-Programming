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
	
    // code here..
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int &i : arr){
    	cin>>i;
    }
    sort(arr.begin(), arr.end());
    int low = 0;
    int high = low+1;
    int res = 0;
    while(high < n){
    	if(arr[high] - arr[low] >= k){
    		res += n-high;
    		low++;
    	}
    	else{
    		high++;
    	}
    }
    cout<<res<<endl;

	return 0;
}