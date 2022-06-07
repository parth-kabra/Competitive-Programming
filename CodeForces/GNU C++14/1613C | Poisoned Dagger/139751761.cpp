#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
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
 
    auto solve = [&](){
        int n,h;
        cin >> n >> h;
        int arr[n];
        for(int i=0;i < n;i++){
            cin >> arr[i];
        }
        int low = 1;
        int high = 1e18;
        int k = -1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            int currsum =mid;
            for(int i=0; i<n-1;i++){
                currsum += min(mid, arr[i+1] - arr[i]);
            }
            if(currsum < h){
                low = mid+1;
            }
            else{
                high = mid-1;
                k = high;
            }
        }
        cout << ++k << endl;
    };
 
    int t;
    cin >> t;
    while(t--){
        solve();
    }
 
    return 0;
}