#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(s) s.begin(),s.end()
const int imax=2147483647;
const int imin=-2147483648;
const int mod=1e9+7;
const int N=3e5+5;
const int N1=1e5+10;
bool prime[N];
int factorials[N1];
void Seive(){memset(prime, true, sizeof(prime));for (int p = 2; p * p <= N; p++){if (prime[p] == true){for (int i = p * p; i <= N; i += p){prime[i] = false;}}}}
void Factorial(){factorials[0]=factorials[1]=1;for(int i=2;i<N1;i++){factorials[i]=factorials[i-1]*i;}}
 
vector<int> v(N);
void solve(){
    for(int i=1;i<N;i++){
        v[i]=v[i-1]^(i-1);
    }
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int parth=v[a];
        cout<<((parth == b) ? a : ((parth ^ b) == a) ? a+2 : a+1 )<<endl;
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