#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void usaco(string filename = ""){
    if(filename.size() > 0){
        #ifndef ONLINE_JUDGE
            freopen((filename + ".in").c_str(), "r", stdin);
            freopen((filename + ".out").c_str(), "w", stdout);
        #endif
    }
    else{
        #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
            freopen("error.txt", "w", stderr); 
        #endif
    }
}
int f(vector<int> &arr,const int n){
    multiset<int> ms;
    for(int i=0; i < n;i++){
        ms.insert(arr[i]);
        auto it = ms.upper_bound(arr[i]);
        if(it != ms.end()){
            ms.erase(it);
        }
    }
    return ms.size();
}
void Solve(){
    int n,m;
    cin >> n >> m;
    vector<int> arr;
    for(int i=0; i < n;i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    vector<int> brr;
    for(int i=0; i < m;i++){
        int x;
        cin >> x;
        brr.push_back(x);
    }
    cout << f(arr,n) + f(brr,m) << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();

    int t = 1;
    cin >> t;
    while(t--){
        Solve();
    }
 
    return 0;
}