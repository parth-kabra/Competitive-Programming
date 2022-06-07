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
bool f(string s){
    map<char,int> mp;
    for(const char &i : s){
        mp[i]++;
        if(mp[i] > 1){
            return false;
        }
    }
    return true;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
 
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i < n;i++){
        cin >> arr[i];
    }
    int res = abs(arr[0]);
    for(int i=0; i < n - 1; i ++){
        res += abs(arr[i+1] - arr[i]);
    }
    cout << res << endl;
 
    return 0;
}