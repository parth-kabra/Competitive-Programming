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

    int t;
    cin>>t;
    //int  i= 1;
    while(t--){
        //cout<<"Case #"<<i<<": "<<endl;
        int x,y;
        cin>>x>>y;
        if(x > y){
            cout<<x - y<<endl;
        }
        else{
            cout<< ((y-x+1)>>1)+(((y-x)&1) ? 1 : 0) <<endl;
        }
        //i++;
    }

	return 0;
}