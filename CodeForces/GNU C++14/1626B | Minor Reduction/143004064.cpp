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
    string s;
    cin >> s;
    int t = s[0] + s[1] - '0' - '0';
    int ind = 0;
    int n = s.size();
    for(int i=0; i < n-1;i++){int tt = (s[i] - '0' + s[i+1] - '0');if(tt > 9){t = tt;ind = i;}}
    for(int i=0; i < n;i++){
        if(i == ind){cout << t;i++;continue;}cout << s[i];
    }
    cout << endl;
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