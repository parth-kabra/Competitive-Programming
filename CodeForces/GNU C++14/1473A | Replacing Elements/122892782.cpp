#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int imax=INT_MAX;
const int imin=INT_MIN;
const int mod=1e9+7;
template <typename T>
pair<T, bool> setEle(set<T>& searchSet,int index){
    pair<T, bool> result;
    if (searchSet.size() > index) {
        result.first= *(std::next(searchSet.begin(),index));
        result.second = true;
    }
    else
        result.second = false;
    return result;
}
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        vector<int> arr(n);
        for(int &i : arr){
            cin>>i;
        }
        sort(arr.begin(),arr.end());
        if(arr[n-1] <= d || arr[0]+arr[1]<=d){
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