#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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
void Solve(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i <n;i++){
        cin >> arr[i];
    }
    set<int> numericals;
    for(int i=0; i < n;i++){
        numericals.insert(arr[i]);
    }
    if(numericals.size() > k){
        cout << -1 << endl;
        return;
    }
    cout << n * k << endl;
    for(int i=0; i < n;i++){
        for(const int j : numericals){
            cout << j << " ";
        }
        for(int j = 0; j < k - numericals.size(); j++){
            cout << 1 << " ";
        }
    }
    cout << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
 
    int t;
    cin >>t;
    while(t--){
        Solve();
    }
 
    return 0;
}