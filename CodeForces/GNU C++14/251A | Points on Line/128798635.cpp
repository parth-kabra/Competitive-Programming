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
void solve(){
    int n,d;
    cin>>n>>d;
    vector<int> arr(n);
    for(int &i : arr){
        cin>>i;
    }
    int res=0;
    for(int i=0;i<n-2;i++){
        int low=i;
        int high=n;
        while(low+1 < high){
            int mid=low+(high-low)/2;
            if(arr[mid] - arr[i] > d and mid-i > 1){
                high=mid;
            }
            else{
                low=mid;
            }
        }
        int temp=low-i;
        res += temp*(temp-1)/2;
    }
    cout<<res<<endl;
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