#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define all(a) a.begin(),a.end()
const int imax=(1LL<<31)-1;
const int imin=INT_MIN;
const int mod=1e9+7;
inline void input(vector<auto> &mp){for(auto &it : mp){cin>>it;}}
void kabraji_ka_totka(){
    // totka hai dosto !
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int res=k+(k-1)/(n-1);
        cout<<res<<endl;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        kabraji_ka_totka();
    return 0;
}