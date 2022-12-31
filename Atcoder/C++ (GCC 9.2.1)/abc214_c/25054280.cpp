#include<bits/stdc++.h>
using namespace std;
using namespace chrono;
#define int long long int
#define double long double
#define all(a) a.begin(),a.end()
#define debug(x) cerr << #x <<" = "; _print(x); cerr << endl;
void _print(int t) {cerr << t;}
void _print(int32_t t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(unsigned long long t) {cerr << t;}
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
void prec(int a) {cout << setprecision(a) << fixed;}
void swap(auto &x, auto &y) {auto temp = x; x = y; y = temp;}
int fact(int n){int N=1e5+10;vector<int> factorials(N);factorials[0]=factorials[1]=1;for(int i=2;i<N;i++){factorials[i]=factorials[i-1]*i;}return factorials[n];}
int sumDigits(int no){return no == 0 ? 0 : no % 10 + sumDigits(no / 10);}
void _input(vector<auto> &mp){for(auto &it : mp){cin>>it;}}
void print(vector<auto> &mp,string end="\n"){for(auto &it : mp){cout<<it<<end;}}
void print(auto &s,string end="\n"){cout<<s<<end;}
const int imax=(1LL<<31)-1;
const int imin=INT_MIN;
const int mod=1e9+7;
const int N=2e5+10;
void kabraji_ka_totka(){
 int n;
 cin>>n;
 int s[n],t[n];
 for(int i=0;i<n;i++)
 {
  cin>>s[i];
 }
 for( int i=0;i<n;i++)
 {
  cin>>t[i];
 }
 vector<int>ans(n,0);
 ans[0]=min(t[0],(t[n-1]+s[n-1]));
 for( int i=1;i<n;i++)
 {
   int x=ans[i-1]+s[i-1];
  ans[i]=min(x,t[i]);
 }
     ans[0]=min(ans[0],(ans[n-1]+s[n-1]));
 for( int i=1;i<n-1;i++)
 {
   int x=ans[i-1]+s[i-1];
  ans[i]=min(x,t[i]);
 }
 for( int i=0;i<n;i++)
 {
  cout<<ans[i]<<endl;
 }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("result.txt", "w", stdout);
        freopen("err.txt", "w", stderr);
    #endif
        auto start1 = high_resolution_clock::now();
        kabraji_ka_totka();
        auto stop1 = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop1 - start1);
        prec(5);
        cerr <<"\n\n----------------------\n|      Time: " << duration . count() / 1000 << "       |" <<endl;
        cerr<<"----------------------"<<endl;
    return 0;
}