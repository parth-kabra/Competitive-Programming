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
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
    
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a[n];
        map<int,int> mp;
        for(int i =0; i < n ;i++){
            cin >> a[i];
            mp[a[i]] = i;
        }
        int b[n];
        for(int i=0; i < m;i++){
            cin >> b[i];
        }
        int res = m;
        int last = -1;
        for(int i = 0 ; i < m;i++){
            if(mp[b[i]] > last){
                last = mp[b[i]];
                res += 2*(mp[b[i]] - i);
            }
        }
        cout << res << endl;
    }
 
    return 0;
}