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
void Solve(){
    int n,m;
    cin >> n >> m;
    int arr[n];
    for(int i=0; i < n ;i++){
        cin >> arr[i];
    }
    vector<int> ind(m);
    for(int i=0; i < m ;i++){
        cin >> ind[i];
    }
    for(int i=0; i < m;i++){
        for(const int &c : ind){
            if(arr[c - 1] > arr[c]){
                swap(arr[c - 1], arr[c]);
            }
        }
    }
    
    if(is_sorted(arr, arr+ n)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
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