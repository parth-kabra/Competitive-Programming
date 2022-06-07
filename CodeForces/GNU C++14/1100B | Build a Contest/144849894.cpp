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
    int k,n;
    cin >> k>> n;
    int arr[n];
    for(int i=0; i < n;i++){
        cin >> arr[i];
    }
    map<int,int> pref;
    map<int,int> pref1;
    for(int i=0; i < n ;i++){
        pref[arr[i]]++;
        pref1[pref[arr[i]]]++;
        if(pref1[pref[arr[i]]] == k){
            cout << 1;
        }
        else{
            cout << 0;
        }
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
 
    int t = 1;
    //cin >> t;
    while(t--){
        Solve();
    }
 
    return 0;
}