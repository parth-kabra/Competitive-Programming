#include<bits/stdc++.h>
using namespace std;
/*-------------------------------------------------------------------------------------------------------------------------------------*/
#define int long long
#define endl '\n'
#define double long double
#define pi 3.141592653589793
#define all(s) s.begin(),s.end()
#define debug(x) cerr << #x <<" = "; _print(x); cerr << endl;
/*-------------------------------------------------------------------------------------------------------------------------------------*/
const int imax = 2147483647;
const int imin = -2147483648;
const int mod = 1e9+7;
const int N = 1e5+10;
const int ONE = 1e18;
bool prime[N];
int factorials[N];
/*-------------------------------------------------------------------------------------------------------------------------------------*/
typedef priority_queue<int> maxheap;
typedef priority_queue<int,vector<int>,greater<int>> minheap;
/*-------------------------------------------------------------------------------------------------------------------------------------*/
void _print(int t) {cerr << t;}
void _print(bool t) {cerr << t;}
void _print(unsigned int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
/*-------------------------------------------------------------------------------------------------------------------------------------*/
void IO(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("uttar.txt", "w", stdout);freopen("error.txt", "w", stderr); 
        #endif
}
/*-------------------------------------------------------------------------------------------------------------------------------------*/
void seive(){memset(prime,true,sizeof(prime));for(int p=2;p*p<=N;p++){if (prime[p] == true){for(int j=p*p;j<=N;j+=p){prime[j]=false;}}}}
void factorial(){factorials[0]=factorials[1]=1;for(int i=2;i<N;i++){factorials[i]=factorials[i-1]*i;}}
void swap(auto &a, auto &b){a^=b;b^=a;a^=b;}
int power(int a,int b,int m){a%=m;int res = 1;while(b > 0){if(b&1){res = res * a % m;}a =  a * a % m;b >>= 1;}return res;}
int gcd(int a,int b){while(b){a%=b;swap(a,b);}return a;}
int lcm (int a, int b) {return a / gcd(a, b) * b;}
string bin(int n){string res = "";for(int i =0 ; i < 31; i++){int ith = (n >> i);res += ((ith & 1) ? '1' : '0');}return res;}
void input(vector<int> &arr){for(int &i : arr){cin>>i;}}
/*-------------------------------------------------------------------------------------------------------------------------------------*/
void solve(){
    int a,b;
    cin>>a>>b;
    a = abs(a-b);
    b = 0;
    int i = 0;
    while(a > b || (b-a)&1){
        b+=++i;
    }
    cout<<i<<endl;
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