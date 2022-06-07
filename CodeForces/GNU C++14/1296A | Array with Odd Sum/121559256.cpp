#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int imax=INT_MAX;
const int imin=INT_MIN;
const int mod=1e9+7;
bool isOdd(vector<int> arr, int n){
    int l, r, flag = 0, flag1 = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] % 2 == 0 && flag == 0) {
            flag = 1;
            l = arr[i];
        }
        if (arr[i] % 2 != 0 && flag1 == 0) {
            r = arr[i];
            flag1 = 1;
        }
    }
    if (sum % 2 != 0) {
        return true;
    }
    else {
        if (flag1 == 1 && flag == 1)
            return true;
        else
            return false;
    }
}
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            arr.push_back(a); 
        }
        if(isOdd(arr,n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
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