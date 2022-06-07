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
        vector<int> arr(4);
        for(int &i : arr){
            cin>>i;
        }
        int one_min=min(arr[0],arr[1]);
        int one_max=max(arr[0],arr[1]);
 
        int two_min=min(arr[2],arr[3]);
        int two_max=max(arr[2],arr[3]);
 
        if(one_min > two_max || two_min > one_max){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
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