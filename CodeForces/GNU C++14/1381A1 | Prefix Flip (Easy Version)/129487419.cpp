#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(s) s.begin(),s.end()
const int imax=2147483647;
const int imin=-2147483648;
const int mod=1e9+7;
const int N=1e5+10;
bool prime[N];
int factorials[N];
void seive(){memset(prime,true,sizeof(prime));for(int p=2;p*p<=N;p++){if (prime[p] == true){for(int j=p*p;j<=N;j+=p){prime[j]=false;}}}}
void factorial(){factorials[0]=factorials[1]=1;for(int i=2;i<N;i++){factorials[i]=factorials[i-1]*i;}}
void solve(){
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    int k=0;
    for(int i=0;i<n;i++){
        k+=(s[i]!=t[i]);
    }
    cout<<3*k<<" ";
    for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
            cout<<i+1<<" "<<1<<" "<<i+1<<" ";
        }
    }
    cout<<endl;
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("uttar.txt", "w", stdout);
    #endif
        int t;
        t=1;
        cin>>t;
        while(t--){
            solve();
        }
    return 0;
}