#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(a) a.begin(),a.end()
const int imax=(1LL<<31)-1;
const int imin=-2147483648;
const int mod=1e9+7;
const int N=1e5+10;
void solve(){
    map<string,int> mp;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        if(!mp[s]){
            mp[s]++;
            cout<<"OK"<<endl;
        }
        else{
            cout<<s<<mp[s]<<endl;
            mp[s]++;
        }
    } 
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("op.txt", "w", stdout);
    #endif
        solve();
    return 0;
}