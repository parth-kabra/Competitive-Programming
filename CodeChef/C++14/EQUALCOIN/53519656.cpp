#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void IO(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);freopen("error.txt", "w", stderr); 
    #endif
}
int32_t main(){
    IO();

    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin >> x>>y;
        if((x + (y << 1)) & 1){
            cout << "NO" << endl;
        }
        else{
            cout << ((!x && (y&1)) ? "NO" : (!x && (y&1) == 0) ? "YES" : "YES") << endl;
        }
    }

    return 0;   
}