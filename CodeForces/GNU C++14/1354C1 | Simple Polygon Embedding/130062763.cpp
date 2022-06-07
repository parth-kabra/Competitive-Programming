#include<bits/stdc++.h>
using namespace std;
/*-------------------------------------------------------------------------------------------------------------------------------------*/
#define int long long
#define endl '\n'
#define pi 3.141592653589793
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
 
/*double angle = 0;
int form(int x){
    if(x <= 0){
        return x;
    }
    return form(x-1);
    angle++;
}*/   
void kabraji_ka_totka(){
    // totka hai dosto !
    int n;
    cin>>n;
    double res= 1/(tan(pi/(2*n)));
    cout<<fixed << setprecision(9) << res <<endl;
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