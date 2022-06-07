/*
	Author: Legend
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define str string
#define vec vector
const int mod=1e9+7;
int power(int a, int b){
    int ans = 1;
    while (b > 0){
        if (b & 1){
            ans = (ans * a) % mod;
        }
        a = (a * a) % mod;
        b >>= 1;
    }
    return ans;
}
void solve(){
	int test_cases;cin>>test_cases;
	while(test_cases--){
		int usr;cin>>usr;
		int ans=power(2,usr-1);
		cout<<ans<<endl;
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