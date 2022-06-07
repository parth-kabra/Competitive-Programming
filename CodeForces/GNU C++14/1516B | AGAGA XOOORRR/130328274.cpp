#include<bits/stdc++.h>
using namespace std;
/*-------------------------------------------------------------------------------------------------------------------------------------*/
#define int long long
#define endl '\n'
#define pi 3.141592653589793
#define all(s) s.begin(),s.end()
#define debug(x) cerr << #x <<" = "; _print(x); cerr << endl;
/*-------------------------------------------------------------------------------------------------------------------------------------*/
const int imax=2147483647;
const int imin=-2147483648;
const int mod=1e9+7;
const int N=1e5+10;
bool prime[N];
int factorials[N];
/*-------------------------------------------------------------------------------------------------------------------------------------*/
void _print(int t) {cerr << t;}
void _print(unsigned int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(long double t) {cerr << t;}
void _print(double t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
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
void swap(auto &a, auto &b){a^=b;b^=a;a^=b;}
/*-------------------------------------------------------------------------------------------------------------------------------------*/
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int x = 0;
    for(int &i : arr){
        cin>>i;
        x^=i;
    }   
    if(!x){
        cout<<"YES"<<endl;
        return;
    }
    bool found=false;
    int x1=0;
    for(int &i : arr){
        x1^=i;
        if(x1 == x){
            found=true;
        }
        if(found && x1 == 0){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}    
int32_t main(){
    IO();
    int t;t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
/*-------------------------------------------------------------------------------------------------------------------------------------*/