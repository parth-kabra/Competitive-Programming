#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int MAX=1e6;
const int mod=1e9+7;
void solve(){
    int n;cin>>n;
    string s;
    cin>>s;
    int d=0,a=0;
    for(char i : s){
        if(i=='A') a++;
        if(i=='D') d++;
    }
    if(d > a){
        cout<<"Danik"<<endl;
    }
    else if(a > d){
        cout<<"Anton"<<endl;
    }
    else if(a==d){
        cout<<"Friendship"<<endl;
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