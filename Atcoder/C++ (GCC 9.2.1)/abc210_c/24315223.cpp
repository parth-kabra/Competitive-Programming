#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int imax=INT_MAX;
const int imin=INT_MIN;
const int mod=1e9+7;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            a=i+1;
            break;
        }
    }
    if(a%2!=0){
        cout<<"Takahashi"<<endl;
    }
    else{
        cout<<"Aoki"<<endl;
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
