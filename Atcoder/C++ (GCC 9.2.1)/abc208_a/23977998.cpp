#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int MAX=1e6;
const int mod=1e9+7;
void solve(){
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<"No"<<endl;
        return;
    }
    if(b<=a*6){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
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