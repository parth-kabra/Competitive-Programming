#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define all(a) a.begin(),a.end()
const int imax=(1LL<<31)-1;
const int imin=INT_MIN;
const int mod=1e9+7;
void kabraji_ka_totka(){
    // totka hai dosto !
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        k*=(n+k-1)/k;
        cout<<(k+n-1)/n<<endl;
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