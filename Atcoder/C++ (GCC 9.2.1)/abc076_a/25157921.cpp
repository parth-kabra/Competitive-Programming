#include<bits/stdc++.h>
using namespace std;
using namespace chrono;
#define int long long
#define ull unsigned long long 
#define double long double
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n;
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
bool isvowel(char a){if(a=='a' || a=='i' || a=='o' || a=='u' || a=='e'){ return true;}return false;}
void swap(auto &x, auto &y) {auto temp = x; x = y; y = temp;}
int fact(int n){int N=1e5+10;vector<int> factorials(N);factorials[0]=factorials[1]=1;for(int i=2;i<N;i++){factorials[i]=factorials[i-1]*i;}return factorials[n];}
int sumDigits(int no){return no == 0 ? 0 : no % 10 + sumDigits(no / 10);}
void _input(vector<auto> &mp){for(auto &it : mp){cin>>it;}}
void print(set<auto> &mp,string end=" "){for(auto it : mp){cout<<it<<end;}cout<<endl;}
void print(vector<auto> &mp,string end="\n"){for(auto &it : mp){cout<<it<<end;}}
void print(auto &s,string end="\n"){cout<<s<<end;}
const int imax=(1LL<<31)-1;
const int imin=INT_MIN;
const int mod=1e9+7;
const int N=2e5+10;

void kabraji_ka_totka(){
    // totka hai dosto !
    int r,g;
    cin>>r>>g;
    cout<<(2*g-r)<<endl;
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