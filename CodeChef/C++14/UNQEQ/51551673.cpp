#include<bits/stdc++.h>
using namespace std;
/*-------------------------------------------------------------------------------------------------------------------------------------*/
#define ll long long
#define pb push_back
#define endl '\n'
#define all(s) s.begin(),s.end()
const int imax=2147483647;
const int imin=-2147483648;
const int mod=1e9+7;
const int N=1e5+10;
bool prime[N];
int factorials[N];
/*-------------------------------------------------------------------------------------------------------------------------------------*/
void IO(){
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("uttar.txt", "w", stdout);
    #endif
}
/*-------------------------------------------------------------------------------------------------------------------------------------*/
void seive(){memset(prime,true,sizeof(prime));for(int p=2;p*p<=N;p++){if (prime[p] == true){for(int j=p*p;j<=N;j+=p){prime[j]=false;}}}}
void factorial(){factorials[0]=factorials[1]=1;for(int i=2;i<N;i++){factorials[i]=factorials[i-1]*i;}}
/*-------------------------------------------------------------------------------------------------------------------------------------*/

void  kabraji_ka_totka(){
        ll n;
    cin>>n;
    ll x=n*(n+1)/2;
    if(x%2==1){
      cout<<"NO"<<endl;
    }else{
      cout<<"YES"<<endl;
      vector<ll>a,b;
      ll i=1,j=n;
      ll c=n/2;
      while(c--){
        if(i%2==1){
          a.pb(i);
          a.pb(j);
          i++;
          j--;
        }else{
                    b.pb(i);
          b.pb(j);
          i++;
          j--;
        }
      }
      ll m=a.size();
      ll m2=b.size();
      
      reverse(a.begin(),a.begin()+n/2);
      reverse(b.begin(),b.end()-1);
           for(ll i=0;i<m;i++){
         cout<<a[i]<<" ";
       }
       cout<<endl;
       for(ll i=0;i<m2;i++){
         cout<<b[i]<<" ";
       }
       cout<<endl;
    }
}
int32_t main(){
    IO();
    int t;t=1;
    cin>>t;
    while(t--){
        kabraji_ka_totka();
    }
    return 0;
}
/*-------------------------------------------------------------------------------------------------------------------------------------*/