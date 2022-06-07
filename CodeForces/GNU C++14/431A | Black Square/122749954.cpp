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
    int arr[5];
    for(int i=1;i<=4;i++){
        cin>>arr[i];
    }
    string s;
    cin>>s;
    int res=0;
    for(char &i : s){
        res+=arr[i-'0'];
    }
    print(res);
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