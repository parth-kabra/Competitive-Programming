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
    int n;
    cin >> n;
    vector<vector<int>> arr;
    for(int i=0; i < n;i++){
        int x;
        cin >> x;
        vector<int> t(x);
        for(int &i : t){
            cin >> i;
        }
        sort(t.begin(), t.end());
        arr.push_back(t);
    }
    for(int i=1; i<= 100;i++){
        bool fine = true;
        for(auto it : arr){
            if(binary_search(it.begin(), it.end(), i) == false){
                fine = false;
                break;
            }
        }
        if(fine){
            cout << i << " ";
        }
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
 
    int t = 1;
    //cin >>t;
    while(t--){
        Solve();
    }
 
    return 0;
}