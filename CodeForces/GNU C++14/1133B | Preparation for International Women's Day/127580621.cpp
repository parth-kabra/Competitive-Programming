#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(s) s.begin(),s.end()
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int &i : arr){
        cin>>i;
    }
    map<int,int> dp;
    for(int i=0;i<k;i++){
        dp.insert({i,0});
    }
    int res=0;
    for(int &i : arr){
        if(dp[(k-i%k)%k] > 0){
            dp[(k-i%k)%k]--;
            res+=2;
        }
        else dp[i%k]++;
    }
    cout<<res<<endl;
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("uttar.txt", "w", stdout);
    #endif
        solve();
    return 0;
}