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
void seive(){memset(prime, true, sizeof(prime));for (int p = 2; p * p <= N; p++){if (prime[p] == true){for (int i = p * p; i <= N; i += p){prime[i] = false;}}}}
void factorial(){factorials[0]=factorials[1]=1;for(int i=2;i<N1;i++){factorials[i]=factorials[i-1]*i;}}
void solve(){
    int s;
    cin>>s;
    while(true){
        s++;
        set<int> mp;
        mp.emplace(s/1000);
        mp.emplace(s/100%10);
        mp.emplace(s/10%10);
        mp.emplace(s%10);
        if(mp.size() == 4){
            break;
        }
    }
    cout<<s<<endl;
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