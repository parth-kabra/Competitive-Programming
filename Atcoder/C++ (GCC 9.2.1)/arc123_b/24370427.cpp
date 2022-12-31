#include<bits/stdc++.h>
#define ll long long int 
#define pb           push_back
#define pob          pop_back
#define to top()
#define e  empty()
#define mp           make_pair
#define endl        '\n'
#define fi           first

#define  po pop()
#define pu push()
#define se           second
#define mp           make_pair
#define pii          pair<int,int>
#define vi           vector<int>
#define mii          unordered_map<int,int>
#define pqb          priority_queue<int>
#define pqs          priority_queue< int,vi,greater<int> >

#define read(a)  \
        long long a; \
        cin >> a
            
#define reads(a) \
        string a;    \
        cin >> a
            
#define prnt(a) cout << a << endl
#define all(a) begin(a), end(a)

#define fora(i, n)    for(ll i = 0; i < n; i++)
#define forb(i, n)    for(ll i = 1; i <= n; i++)
#define forc(a, b)    for(const auto &a : b)

#define input(v, n)  \
        vector<ll> v(n); \
        fora(i, n) cin >> v[i];
        
#define setbits(X) __builtin_popcountll(X)

#define fix(X) fixed << setprecision(X)

#define fastI_O                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
    
const int MOD = 1e9 + 7;

using namespace std;
 
// recursive function to count set bits
int countSetBits(int n)
{   
    // n is the number whose set bits we have to count
    if (n == 0) // base case
        return 0;
 
    else   // if last bit set add 1 else add 0
        return (n & 1) + countSetBits(n >> 1);
}
 
 
ll factorial(ll n)
{
    if (n == 0)
        return 1;
    return (n * factorial(n - 1));
}
 
 
bool is_palindrom_number(ll n)
{
    ll num, digit, rev = 0;
    num = n;
    while (num != 0)
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num /= 10;
    }
    return (num == n ? true : false);
}

 
/*void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, simayankeof(prime));
    prime[0] = prime[1] = false;
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}
*/ 
bool isPalindrome(string str)
{
    int l = 0;
    int h = str.length() - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            return false;
        }
    }
    return true;
}
 
 int removemayankeros(int num) {
    int ret = 0;
    int ten = 1;
    while (num) {
        int dig = num % 10;
        num /= 10;
        if (dig) {
            ret += dig * ten;
            ten *= 10;
        }
    }
    return ret;
}
 
 
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
 
   
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}
 
  void print(bool t) //print(1) or print(0);
{
    if(t)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
ll out=0;
const int N=1e6+10;
ll a[N],b[N];
void solve()
{
read(n); input(a,n); input(b,n);input(c,n);
 //priority_queue <int,vi,greater<int>> 
 pqs nitin,arjun,mayank;
   fora(i,n)
    {
        nitin.push(a[i]);
        arjun.push(b[i]);
        mayank.push(c[i]);
    }
    while(!nitin.e && !arjun.e && !mayank.e)
    {
        ll fi=nitin.to;
        nitin.po;

        while( !arjun.e && arjun.to<=fi) arjun.po;
        if(arjun.e)
        {
           prnt(out);
            return;
        }
        ll second=arjun.to;
        arjun.po;

        while( !mayank.e && mayank.to<=second ) mayank.po;

        if(mayank.e)
        {
            prnt(out);
            return;
        }
        mayank.po;
        out++;
    }
    prnt(out);
  
}
 
 int32_t main()
{
  fastI_O;
  ll t=1;    //cin>>t;
  while(t--) solve();
  return 0;
}