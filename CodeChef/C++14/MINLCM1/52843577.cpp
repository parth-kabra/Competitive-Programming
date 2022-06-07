#include<bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
int gcd(int a,int b){
    while(b){
        a%=b;
        swap(a,b);
    }
    return a;
}
int lcm(int a, int b){
    return a / gcd(a, b) * b; 
}
int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("uttar.txt", "w", stdout); 
        freopen("error.txt", "w", stderr);
    #endif
	
    // code here..

    int t;
    cin>>t;
    while(t--){
        //cout<<gcd(1,2)<<endl;
        int a,b;
        cin>>a>>b;
        int one = (a << 1);
        int two = lcm(a*b, a*b - 1);
        cout<<one<<" "<<two<<endl;
    }

	return 0;
}