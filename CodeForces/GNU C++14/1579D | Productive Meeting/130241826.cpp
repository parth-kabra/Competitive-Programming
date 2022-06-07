#include<bits/stdc++.h>
using namespace std;
/*-------------------------------------------------------------------------------------------------------------------------------------*/
#define int long long
#define endl '\n'
#define pi 3.141592653589793
#define all(s) s.begin(),s.end()
const int imax=2147483647;
const int imin=-2147483648;
const int mod=1e9+7;
const int N=1e5+10;
bool prime[N];
int factorials[N];
/*-------------------------------------------------------------------------------------------------------------------------------------*/
void IO(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("uttar.txt", "w", stdout);
    #endif
}
/*-------------------------------------------------------------------------------------------------------------------------------------*/
void seive(){memset(prime,true,sizeof(prime));for(int p=2;p*p<=N;p++){if (prime[p] == true){for(int j=p*p;j<=N;j+=p){prime[j]=false;}}}}
void factorial(){factorials[0]=factorials[1]=1;for(int i=2;i<N;i++){factorials[i]=factorials[i-1]*i;}}
int set_bits(int n){if(n==0){return 0;}return (n&1) + set_bits(n>>1);}
void swap(auto &a, auto &b){a^=b;b^=a;a^=b;}
/*-------------------------------------------------------------------------------------------------------------------------------------*/
 
void kabraji_ka_totka(){
    // totka hai dosto !
   multiset<pair<int,int>> mp;
   mp.clear();
   int n;
   cin>>n;
   vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]){
            mp.insert({-arr[i], i+1});
        }
   }     
    vector<pair<int,int>> res;
    while(mp.size() > 1){
        pair<int,int> one = *mp.begin();
        mp.erase(one);
        pair<int,int> two = *mp.begin();
        mp.erase(two);
        res.push_back({one.second , two.second});
        one.first++;
        two.first++;
        if(one.first < 0){
            mp.insert(one);
        }
        if(two.first < 0){
            mp.insert(two);
        }
   }
   cout<<res.size()<<endl;
   for(auto it : res){
    cout<<it.first<<" "<<it.second<<endl;
   }
}
    
int32_t main(){
    IO();
    int t;t=1;
    cin>>t;
    while(t--){
        kabraji_ka_totka();
    }
    return 0;
}
/*-------------------------------------------------------------------------------------------------------------------------------------*/