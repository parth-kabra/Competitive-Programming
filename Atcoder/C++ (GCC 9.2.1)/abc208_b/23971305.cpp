#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int MAX=1e6;
const int mod=1e9+7;
void solve(){
    int n;cin>>n;
    vector<int> arr;
    for(int i=10;i>0;i--){
        int fact=1;
        for(int j=1;j<=i;j++){
            fact*=j;
        }
        arr.push_back(fact);
    }
    int res=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] <= n){
            n-=arr[i];
            i--;
            res++;
        } 
        if(n<=0) break;
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