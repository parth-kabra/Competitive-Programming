#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(s) s.begin(),s.end()
const int imax=2147483647;
const int imin=-2147483648;
const int mod=1e9+7;
const int N=1e5+10;
const int N1=1e5+10;
bool prime[N];
int factorials[N1];
void seive(){memset(prime,true,sizeof(prime));for(int p=2;p*p<=N;p++){if (prime[p] == true){for(int j=p*p;j<=N;j+=p){prime[j]=false;}}}}
void factorial(){factorials[0]=factorials[1]=1;for(int i=2;i<N1;i++){factorials[i]=factorials[i-1]*i;}}
int a[110][110];
map<char,int> mp;
bool comp(string a,string b){
    int n=min(a.size(),b.size());
    for(int i=0;i<n;i++){
        char x=a[i];
        char y=b[i];
        if(mp[x] < mp[y]){
            return true;
        }
        if(mp[x] > mp[y]){
            return false;
        }
    }
    if(a.size() <= b.size()){
        return true;
    }
    return false;
}
void solve(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        mp[s[i]]=i;
    }
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,comp);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("uttar.txt", "w", stdout);
    #endif
        solve();
    return 0;
}