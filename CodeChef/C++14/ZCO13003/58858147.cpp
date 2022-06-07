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

    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i < n;i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int low = 0;
    int high = n - 1;
    int res = 0;
    while(low < high){
        if(arr[low] + arr[high] < k){
            res++;
            low++;
            res += (high - low);
        }
        else high--;
    }   
    cout << res << endl;

    return 0;
}