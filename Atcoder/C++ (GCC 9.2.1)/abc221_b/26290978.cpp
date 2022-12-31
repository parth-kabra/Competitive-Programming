#include<bits/stdc++.h>
using namespace std;
/*-------------------------------------------------------------------------------------------------------------------------------------*/
#define int long long
#define endl '\n'
#define pi 3.141592653589793
#define all(s) s.begin(),s.end()
/*-------------------------------------------------------------------------------------------------------------------------------------*/
const int imax=2147483647;
const int imin=-2147483648;
const int mod=1e9+7;
const int N=1e5+10;
bool prime[N];
int factorials[N];
/*-------------------------------------------------------------------------------------------------------------------------------------*/
typedef priority_queue<int> maxheap;
typedef priority_queue<int,vector<int>,greater<int>> minheap;
/*-------------------------------------------------------------------------------------------------------------------------------------*/
void IO(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("uttar.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
}
/*-------------------------------------------------------------------------------------------------------------------------------------*/
void seive(){memset(prime,true,sizeof(prime));for(int p=2;p*p<=N;p++){if (prime[p] == true){for(int j=p*p;j<=N;j+=p){prime[j]=false;}}}}
void factorial(){factorials[0]=factorials[1]=1;for(int i=2;i<N;i++){factorials[i]=factorials[i-1]*i;}}
int set_bits(int n){if(n==0){return 0;}return (n&1) + set_bits(n>>1);}
//void swap(int &a, int &b){a^=b;b^=a;a^=b;}
void input(vector<int> &arr){for(int &i : arr){cin>>i;}}
/*-------------------------------------------------------------------------------------------------------------------------------------*/
void solve(){
    string s,t;
    cin>>s>>t;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]!=t[i]){
            swap(s[i],s[i+1]);
            break;
        }
    }
    cout<<((s==t) ? "Yes" : "No")<<endl;
}
int32_t main(){
    IO();
    int t;t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
/*-------------------------------------------------------------------------------------------------------------------------------------*/