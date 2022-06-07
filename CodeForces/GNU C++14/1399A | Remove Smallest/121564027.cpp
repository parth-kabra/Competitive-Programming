#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int imax=INT_MAX;
const int imin=INT_MIN;
const int mod=1e9+7;
void solve(){
    int n;cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        arr.push_back(m);
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++){
        if(abs(arr[i]-arr[i+1])<=1){
            continue;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        int t;cin>>t;
        while(t--){
            solve();
        }
    return 0;
}