#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int imax=INT_MAX;
const int imin=INT_MIN;
const int mod=1e9+7;
int getProduct(int n)
{
    int product = 1;
 
    while (n != 0)
    {
        product = product * (n % 10);
        n = n / 10;
    }
 
    return product;
}
void solve(){
    int n;cin>>n;
    vector<int> arr(n);
    int cnt=0;
    for(int &i : arr){
        cin>>i;
        if(i==1){
            cnt++;
        }
    }
    sort(arr.begin(),arr.end());
    int check[n]={0};
    check[0]=0;
    for(int i=1;i<n;i++){
        check[i]=check[i-1];
        if(arr[i] >= arr[i-1]){
            check[i]++;
        }
    }
    int res=1;
    for(int i=0;i<n;i++){
        int x=arr[i]-check[i];
        res=(res*x)%mod;
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
        solve();
    return 0;
}
