#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int imax=INT_MAX;
const int imin=INT_MIN;
const int mod=1e9+7;
void solve(){
    int t;cin>>t;
    int m=0,c=0;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a>b){
            m++;
        }
        else if(b > a){
            c++;
        }
    }
    if(m>c){
        cout<<"Mishka"<<endl;
    }
    else if(c > m){
        cout<<"Chris"<<endl;
    }
    else{
        cout<<"Friendship is magic!^^"<<endl;
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