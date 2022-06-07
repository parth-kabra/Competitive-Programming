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
 
int numgcds(vector<int> &arr){
    int limit = *max_element(arr.begin(), arr.end()) + 1;
    int res = 0;
    set<int> s(arr.begin(), arr.end());
    for(int j = 1; j < limit; j++){
        int g = 0;
        for(int x = j; x < limit; x+=j){
            if(s.find(x) != s.end()){
                g = __gcd(x, g);
                if(g == j){
                    res++;
                    break;
                }
            }
        }
    }
    return res;
}
void Solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i < n ;i++){
        cin >> arr[i];
    }
    int t = numgcds(arr);
    cout << t - n << endl;
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