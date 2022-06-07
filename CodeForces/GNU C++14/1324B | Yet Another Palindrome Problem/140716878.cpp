#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int long long
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void usaco(string filename = ""){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
int32_t main(){
    usaco();
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n ;
        int arr[n];
        for(int i=0; i <n ; i++){
            cin >> arr[i];
        }
        bool found = false;
        for(int i= 0; i < n ;i++){
            for(int j= i+2; j < n ;j++){
                if(arr[i] == arr[j]){
                    found = true;
                    break;
                }
            }
            if(found){
                break;
            }
        }
        cout << ((found) ? "YES" : "NO") << endl;
    }
 
    return 0;
}