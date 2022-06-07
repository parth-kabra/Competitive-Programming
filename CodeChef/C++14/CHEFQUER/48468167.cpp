#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int MAX=1e6;
const int mod=1e9+7;
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> arr(n);
    for(int &i : arr){
        cin>>i;
    }
    while(q--){
        int s;
        cin>>s;
        if(s==1){
            int l,r,x;
            cin>>l>>r>>x;
            for(int i=l-1;i<=r-1;i++){
                arr[i]=arr[i]+((x+i+1-l)*(x+i+1-l));
            }
        }
        if(s==2){
            int x;
            cin>>x;
            cout<<arr[x-1]<<endl;
        }
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