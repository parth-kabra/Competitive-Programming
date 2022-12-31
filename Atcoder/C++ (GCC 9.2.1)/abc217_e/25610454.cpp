#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(s) s.begin(),s.end()
void solve(){
    vector<int> arr;
    multiset<int> mp;
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        if(a == 1){
            int x;
            cin>>x;
            arr.push_back(x);
        }   
        else if(a == 2){
            if(mp.size()){
                int x1=*mp.begin();
                cout<<x1<<endl;
                mp.erase(mp.begin());
            }
            else{
                cout<<arr[0]<<endl;
                arr.erase(arr.begin());
            }
        }
        else{
            for(int i : arr) mp.insert(i);
            arr.clear();
        }
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