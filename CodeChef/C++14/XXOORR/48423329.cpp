#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAX=1e6;
void solve(){
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int &i : arr){
            cin>>i;
        }
        int n1;
        vector<int> res(31);
        int count;
        for(int b=0;b<=30;b++){
            count=0;
            for(int &i : arr){
                if(i%2!=0){
                    count++;
                }
                i/=2;
            }
            res[b]=count;
        }
        int ans=0;
        for(int b=0;b<=30;b++){
            if(res[b]%k==0){
                ans+=res[b]/k;
            }
            else{
                ans+=res[b]/k+1;
            }
        }
        cout<<ans<<endl;

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