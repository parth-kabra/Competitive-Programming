#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
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
const int N = 1e5+5; 
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
template <class T, class V> void _print(multimap <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template<typename T> using Set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using Multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<class key, class value, class cmp = std::less<key>> using Map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
/*-------------------------------------------------------------------------------------------------------------------------------------*/
void usaco(string filename = ""){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    if(filename.size() > 0){
        #ifndef ONLINE_JUDGE
            freopen((filename + ".in").c_str(), "r", stdin);
            freopen((filename + ".out").c_str(), "w", stdout);
        #endif
    }
    else{
        #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
            freopen("error.txt", "w", stderr); 
        #endif
    }
}
/*-------------------------------------------------------------------------------------------------------------------------------------*/
void seive(){prime[0] = prime[1] = false;for(int i = 2; i < N; i++){if(prime[i]){for(int mask = (i<<2); mask < N; mask++){prime[mask] = false;}}}}
void swap(auto &a, auto &b){a^=b;b^=a;a^=b;}
int power(int a,int b,int m){a%=m;int res = 1;while(b > 0){if(b&1){res = res * a % m;}a =  a * a % m;b >>= 1;}return res;}
int gcd(int a,int b){while(b){a%=b;swap(a,b);}return a;}
int lcm (int a, int b) {return a / gcd(a, b) * b;}
string bin(int n){string res = "";for(int i =0 ; i < 31; i++){int ith = (n >> i);res += ((ith & 1) ? '1' : '0');}return res;}
/*-------------------------------------------------------------------------------------------------------------------------------------*/
typedef priority_queue<int> maxheap;
typedef priority_queue<int,vector<int>,greater<int>> minheap;
/*-------------------------------------------------------------------------------------------------------------------------------------*/
void solve(){
    int n,q;
    cin >> n >> q;  
    Multiset<int> s;
    //map<int,int> mp;
    int mn = 0;
    for(int i=0; i < n ;i++){
        int x;
        cin >> x;
        s.insert(x);
        //mp[x]++;
        mn = min(mn, x);
    }

    for(int i=0; i < q;i++){
        int x;
        cin >> x;
        int temp = s.order_of_key(x);
        if(temp == 0){
            cout << n << endl;
        }
        else{
            cout << n- temp << endl;
        }
    }
}
int32_t main(){
    usaco();
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }       
    return 0;
}