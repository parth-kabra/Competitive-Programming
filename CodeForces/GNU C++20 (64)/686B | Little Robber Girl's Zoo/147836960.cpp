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
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
 
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i < n;i++){
        cin >> arr[i];
    }
    for(int i = n -1 ;i >= 0; i--){
        for(int j = 0; j < i;j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j+1]);
                cout << j + 1 << " " << j + 2 << endl;
            }
        }
    }
 
    return 0;
}