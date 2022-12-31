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
const int mod =(1e9+7);
const int N = (1e7+1);
vector<bool> prime(N, true);
//int factorials[N];
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
void seive(){prime[0] = prime[1] = false;for(int i = 2; i < N; i++){if(prime[i]){for(int mask = (i<<2); mask < N; mask++){prime[mask] = false;}}}}
void swap(auto &a, auto &b){a^=b;b^=a;a^=b;}
int power(int a,int b,int m){a%=m;int res = 1;while(b > 0){if(b&1){res = res * a % m;}a =  a * a % m;b >>= 1;}return res;}
int gcd(int a,int b){while(b){a%=b;swap(a,b);}return a;}
int lcm (int a, int b) {return a / gcd(a, b) * b;}
string bin(int n){string res = "";for(int i =0 ; i < 31; i++){int ith = (n >> i);res += ((ith & 1) ? '1' : '0');}return res;}
void input(vector<int> &arr){for(int &i : arr){cin>>i;}}

/*-------------------------------------------------------------------------------------------------------------------------------------*/
typedef priority_queue<int> maxheap;
typedef priority_queue<int,vector<int>,greater<int>> minheap;
/*-------------------------------------------------------------------------------------------------------------------------------------*/
void solve(){
        int a,b;
        cin>>a>>b;
        if(b==1){
            cout<<(a-1)*2<<endl;
        }
        else{
            int temp = a-b;
            if(b > 2){
                cout<<((b&1) ? 2*temp+(b/2)*2 : 2 * temp+(b/2-1)*2)<<endl;
            }
            else{
                cout<<2*temp<<endl;
            }
        }
}
int32_t main(){
    IO();
    int t;t = 1;
    cin>>t;
    //debug(pr);
    //debug(pr);
    while(t--){
        solve();
    }       
    return 0;
}