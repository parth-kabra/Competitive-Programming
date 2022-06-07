#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(a) a.begin(),a.end()
const int imax=(1LL<<31)-1;
const int imin=-2147483648;
const int mod=1e9+7;
const int N=1e5+10;
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int &i : arr){
        cin>>i;
    }
    sort(all(arr));
    int i=0;
    for(int &it : arr){
        i+=i<it;
    }
    cout<<i+1<<endl;
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