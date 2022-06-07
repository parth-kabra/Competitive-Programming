#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int imax=INT_MAX;
const int imin=INT_MIN;
const int mod=1e9+7;
#define print(something) cout<<something<<endl;
#define yes cout<<"yes"<<endl;
#define no cout<<"no"<<endl;
#define YES cout<<"YES"<<endl;
#define NO cout<<"NO"<<endl;
void solve(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        if(l*2 > r){
            cout<<"-1 -1"<<endl;
        }
        else{
            cout<<l<<" "<<l*2<<endl;
        }
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        solve();
    return 0;
}