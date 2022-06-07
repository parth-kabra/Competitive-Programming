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
    vector<int> a(n) , b(n-1);
    for(int i = 0;i<n;i++){cin>>a[i];}
    for(int i = 0;i<n-1;i++){cin>>b[i];}
    b.push_back(0);
    sort(a.begin() , a.end());
    sort(b.begin() , b.end());
    map<int , int> mapp;
    for(int i = 0;i<n;i++){
    
        if(i== n-1){
            mapp[b[i] - a[i]]++;
        }else{
            mapp[b[i] - a[i]]++;
            mapp[b[i+1] - a[i]]++;
        }
    }
    int ans = INT_MAX;
    for(auto it: mapp){
    //   cout<<it.first<<"-"<<it.second<<endl;
        if(it.second == n-1 && it.first>0){
            ans = min(ans , it.first);
        }
    }
    cout<<ans<<endl;
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("op.txt", "w", stdout);
    #endif
        int t;
        cin>>t;
        while(t--){
            solve();
        }
    return 0;
}