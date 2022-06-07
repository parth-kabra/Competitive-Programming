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
    if(n <= 2){
        cout << -1 << endl;
        return;
    }
    vector<int> res;
    if(n % 2 == 0){
        for(int i=1; i < n -2 ;i++){
            res.push_back(i);
        }
        res.push_back(n);
        res.push_back(n - 2);
        res.push_back(n - 1);
        for(const int &i :res){
            cout << i << " ";
        }
        cout << endl;
    }
    else{
        // i am not sure
        res.clear();
        for(int i=1; i<= n;i++){
            res.push_back(i);
        }
        for(const int &i : res){
            cout << i <<" ";
        }
        cout << endl;
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();

    int t = 1;
    cin >>t;
    while(t--){
        Solve();
    }

    return 0;
}