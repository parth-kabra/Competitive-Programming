#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(s) s.begin(),s.end()
const int imax=2147483647;
const int imin=-2147483648;
const int mod=1e9+7;
const int N=1e6+10;
bool prime[N];
int factorials[N];
void seive(){memset(prime,true,sizeof(prime));for(int p=2;p*p<=N;p++){if (prime[p] == true){for(int j=p*p;j<=N;j+=p){prime[j]=false;}}}}
void factorial(){factorials[0]=factorials[1]=1;for(int i=2;i<N;i++){factorials[i]=factorials[i-1]*i;}}
int arr[10][1000005];
int f(int x){
    if(x<10)return x;
    int prod=1;
    while(x){
        if(x%10)prod*=(x%10);
        x/=10;
    }
    return f(prod);
}
void solve(){
    int t;
    cin>>t;
    while(t--){
        int low,high,target;
        cin>>low>>high>>target;
        cout<<arr[target][high]-arr[target][low-1]<<endl;
    }
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
        for(int i=1;i<=1000000;i++){
            arr[f(i)][i]++;
        }
        for(int i=1;i<10;i++){
            for(int j=1;j<=1000000;j++){
                arr[i][j]+=arr[i][j-1];
            }
        }
        /*for(int i=1;i<=N;i++){
            arr[i] = prod(i);
        }*/
        solve();
    return 0;
}