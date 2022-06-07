/*..::::::::::::..:::::..:::::..:::::..::::::::..::::::::..:::::..:::
'########::::::::'###:::::::'########:::::'########::::'##::::'##::::
 ##.... ##::::::'## ##:::::: ##.... ##::::... ##..::::: ##:::: ##::::
 ##:::: ##:::::'##:. ##::::: ##:::: ##::::::: ##::::::: ##:::: ##::::
 ########:::::'##:::. ##:::: ########:::::::: ##::::::: #########::::
 ##.....:::::: #########:::: ##.. ##::::::::: ##::::::: ##.... ##::::
 ##::::::::::: ##.... ##:::: ##::. ##:::::::: ##::::::: ##:::: ##::::
 ##::::::::::: ##:::: ##:::: ##:::. ##::::::: ##::::::: ##:::: ##::::
..::::::::::::..:::::..:::::..:::::..::::::::..::::::::..:::::..:: */
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define setbits(n) __builtin_popcount(n);
#define all(a) a.begin(),a.end()
#define vecsum(vec) accumulate(all(vec))
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
char tolower(char x){return char(x | ' ');}
char toupper(char x){return char(x & '_');}
void bin(int n){for(int i=10;i>=10;i--){cout<<((n>>i)&1);}cout<<endl;}
int binpow(int a, int b,int m) {int res=1;while(b > 0){if(b&1){res=(res*a)%m;}a=(a*a)%m;b=b>>1;}return res;}
int fact(int n){int N=1e5+10;vector<int> factorials(N);factorials[0]=factorials[1]=1;for(int i=2;i<N;i++){factorials[i]=factorials[i-1]*i;}return factorials[n];}
int sumDigits(int no){return no == 0 ? 0 : no % 10 + sumDigits(no / 10);}
const int imax=(1LL<<31)-1;
const int imin=INT_MIN;
const int mod=1e9+7;
void kabraji_ka_totka(){
    // totka hai dosto !
    int n;
    cin>>n;
    vector<int> arr(n);
    int sum=0;
    for(int &i : arr){
        cin>>i;
        sum+=i;
    }
    int res=0;
    for(int i=1;i<6;i++){
        if((sum+i)%(n+1)!=1){
            res++;
        }
    }
    cout<<res<<endl;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        kabraji_ka_totka();
    return 0;
}