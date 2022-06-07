#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int MAX=1e6;
const int mod=1e9+7;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> arr;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
        mp[x]=i;
    }
    vector<int> cp(arr);
    sort(cp.begin(),cp.end());
    vector<int> res(n,0);
    if(k >= n){
        for(int i=0;i<n;i++){
            res[i]=k/n;
        }
    }
    k%=n;
    for(int i=0;i<cp.size();i++){
        if(k){
            res[mp[cp[i]]]++;
            k--;
        }
    }
    for(int it : res){
        cout<<it<<endl;
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