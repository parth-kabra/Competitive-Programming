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
    int n;
    cin>>n;
    vector<int> arr(n);
    int one = 0;
    for(int &i : arr){
        cin>>i;
        one += (i == 1 ? 1 : 0);
    }
    int two = n-one;
    vector<int> res;
    if(two){
        res.push_back(2);
        two--;
    }
    if(one){
        res.push_back(1);
        one--;
    }
    for(int i=0;i<two;i++){
        res.push_back(2);
    }
    for(int i=0;i<one;i++){
        res.push_back(1);
    }
    for(int &i : res){
        cout<<i<<" ";
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
        solve();
    return 0;
}