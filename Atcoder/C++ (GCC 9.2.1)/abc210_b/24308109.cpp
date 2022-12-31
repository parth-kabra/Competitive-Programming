#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int imax=INT_MAX;
const int imin=INT_MIN;
const int mod=1e9+7;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int &i : arr){
        cin>>i;
    }
    unordered_map<int,int> mp;
    for(int i=0;i<k;i++){
        mp[arr[i]]++;
    }
    int res=mp.size();
    for(int i=k;i<n;i++){
        mp[arr[i-k]]--;
        if(mp[arr[i-k]]==0){
            mp.erase(arr[i-k]);
        }
        mp[arr[i]]++;
        res=max(res,(int)mp.size());
    }
    cout<<res<<endl;
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
