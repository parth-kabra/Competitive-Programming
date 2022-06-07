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
 
    int n,m;
    cin >> n >> m;
    vector<string> s;
    for(int i=0; i < n;i++){
        for(int j=0;j <m;j++){
            string ss;
            cin >> ss;
            s.push_back(ss);
        }
    }
 
    int res = 0;
    for(int i =0; i < n - 1;i++){
        for(int j = 0; j < m - 1; j++){
            string temp;
            temp.push_back(s[i][j]);
            temp.push_back(s[i+1][j]);
            temp.push_back(s[i][j+1]);
            temp.push_back(s[i+1][j+1]);
            sort(temp.begin(), temp.end());
            if(temp == "acef"){
                res++;
            }
        }
    }
    cout << res << endl;
 
    return 0;
}