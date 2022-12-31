#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
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
        
    set<int> s;
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(s.find(x) == s.end()){
            s.insert(x);
        }
        else{
            s.erase(x);
        }
    }
    cout << s.size() << endl;

    return 0;
}