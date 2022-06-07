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
int a[110][110];
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a,b;
        for(int i=0;i<2*n;i++){
            int x,y;
            cin>>x>>y;
            if(!x){
                a.push_back(1LL*y*y);
            }
            else{
                b.push_back(1LL*x*x);
            }
        }
        sort(all(a));
        sort(all(b));
        double res=0;
        for(int i=0;i<n;i++){
            res+=sqrt(a[i]+b[i]);
        }
        //cout<<res<<endl;
        printf("%.15f\n",res);
    }
}
int32_t main(){
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("uttar.txt", "w", stdout);
    #endif
        solve();
    return 0;
}