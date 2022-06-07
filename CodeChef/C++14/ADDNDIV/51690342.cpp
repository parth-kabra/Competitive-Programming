#include<bits/stdc++.h>
using namespace std;
/*-------------------------------------------------------------------------------------------------------------------------------------*/
#define int long long
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
void kabraji_ka_totka(){
    // totka hai dosto !
     int a, b; 
    cin >> a >> b;
    int ans = __gcd(a, b);
        while (ans != 1) {
            a /= ans;
            ans = __gcd(a, b); 
        }
        if(a==1){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
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