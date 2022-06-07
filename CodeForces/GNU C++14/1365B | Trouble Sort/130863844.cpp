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
const int N=3*(1e5+1);
bool prime[N];
int factorials[N];
/*-------------------------------------------------------------------------------------------------------------------------------------*/
typedef priority_queue<int> maxheap;
typedef priority_queue<int,vector<int>,greater<int>> minheap;
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
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
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
int set_bits(int n){if(n==0){return 0;}return (n&1) + set_bits(n>>1);}
void swap(auto &a, auto &b){a^=b;b^=a;a^=b;}
unordered_map<int,int> Counter(vector<int> &a){unordered_map<int,int> mp;for(auto &i : a){mp[i]++;}return mp;}
void input(vector<int> &arr){for(int &i : arr){cin>>i;}}
/*-------------------------------------------------------------------------------------------------------------------------------------*/
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    vector<int> brr(n);
    input(arr);
    set<int> must_have;
    for(int &i : brr){
        cin>>i;
        must_have.emplace(i);
    }
 
    if(is_sorted(all(arr))){
        cout<<"Yes"<<endl;
    }
 
    // in order to sort the array one should have 0, 1 in the array B;
    // else one cannot swap the elements fromt array A
 
    else{
        debug(must_have);
        cout<<((must_have.size() > 1) ? "Yes" : "No")<<endl;
    }
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