#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int imax=INT_MAX;
const int imin=INT_MIN;
const int mod=1e9+7;
int vecSum(vector<int> arr){
    int res=0;
    for(int i : arr){
        res+=i;
    }
    return res;
}
void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> arr(n);
    for(int &i : arr){
        cin>>i;
    }
    for(int i=0;i<n;i++){
        if((i+1)%2==0){
            arr[i]--;
        }
    }
    int sum=vecSum(arr);
    if(sum>x){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
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
