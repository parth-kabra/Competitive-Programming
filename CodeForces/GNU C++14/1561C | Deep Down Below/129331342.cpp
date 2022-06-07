#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(s) s.begin(),s.end()
const int imax=2147483647;
const int imin=-2147483648;
const int mod=1e9+7;
const int N=1e5+10;
const int N1=1e5+10;
bool prime[N];
int factorials[N1];
void seive(){memset(prime,true,sizeof(prime));for(int p=2;p*p<=N;p++){if (prime[p] == true){for(int j=p*p;j<=N;j+=p){prime[j]=false;}}}}
void factorial(){factorials[0]=factorials[1]=1;for(int i=2;i<N1;i++){factorials[i]=factorials[i-1]*i;}}
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        pair<int,int> mp[n];
        for(int i=0;i<n;i++){
            cin>>mp[i].second;
            int best_fighter=-1;
            for(int j=0;j<mp[i].second;j++){
                int x;
                cin>>x;
                best_fighter=max(x-j+1,best_fighter);
            }
            mp[i].first=best_fighter;
        }
        sort(mp,mp+n);
        int fights=0;
        int res=-1;
        for(int i=0;i<n;i++){
            res=max(res,mp[i].first - fights);
            fights+=mp[i].second;
        }
        cout<<res<<endl;
    }
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