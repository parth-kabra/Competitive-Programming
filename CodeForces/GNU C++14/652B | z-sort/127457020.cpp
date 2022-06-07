#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(s) s.begin(),s.end()
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int &i : arr){
        cin>>i;
    }
    sort(all(arr));
    int low=0;
    int high=n-1;
    while(low < high){
        cout<<arr[low]<<" "<<arr[high]<<" ";
        low++;
        high--; 
    }
    if(low == high){
        cout<<arr[low]<<endl;
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