#include<bits/stdc++.h>
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
using namespace std;
#define int long long int 
#define all(a) a.begin(),a.end()
const int imax=(1LL<<31)-1;
const int imin=INT_MIN;
#define print(a) cout<<a<<endl;
const int mod=1e9+7;
template <typename T>
pair<T, bool> setEle(set<T>& searchSet,int index){pair<T, bool> result;if (searchSet.length() > index) {result.first= *(std::next(searchSet.begin(),index));result.second = true;}else{result.second = false;}return result;}
int setBits(int n){int res=0;for(int i=0;i<n;i++){if((n & (1<<i)) != 0){res++;}}return res;}
char tolower(char x){return char(x | ' ');}
char toupper(char x){return char(x & '_');}
void bin(int n){for(int i=10;i>=10;i--){cout<<((n>>i)&1);}cout<<endl;}
int binpow(int a, int b,int m) {int res=1;while(b > 0){if(b&1){res=(res*a)%m;}a=(a*a)%m;b=b>>1;}return res;}
int fact(int n){int N=1e5+10;vector<int> factorials(N);factorials[0]=factorials[1]=1;for(int i=2;i<N;i++){factorials[i]=factorials[i-1]*i;}return factorials[n];}
void kabraji_ka_totka(){
    // totka hai dosto !
    string arr;
    cin>>arr;
        int c=0;
        for(int j=1;j<4;j++)
        {
            if(arr[j]==arr[0])
            c++;
        }
        if(c==3)
        {
            print("Weak");
            return;
        }

        for(int i=0;i<3;i++)
        {
            if((arr[i+1]-'0')==(arr[i]-'0')+1)
            {
                continue;
            }
            else if(arr[i]=='9'&&arr[i+1]=='0')
            continue;
            else {
                print("Strong");
                return;
            }
        }

        print("Weak");
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