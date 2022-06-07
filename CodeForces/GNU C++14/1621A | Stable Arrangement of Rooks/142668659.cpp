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
    int n,m;
    cin >> n >> m;
    if(n == 1 && n == m){
        cout << "R" << endl;
        return;
    }
    map<int, bool> mark;
    char arr[n][n];
    if((n + 1) / 2 < m){
        cout << -1 << endl;
        return;
    }
    for(int i=0; i < n; i ++){        
        bool place = m > 0 && i%2 == 0;
        if(place){
            m--;
        }
        for(int j = 0; j < n ;j++){
            if(i != j){
                cout << '.';
            }
            else{
                cout << (place ? 'R' : '.');
            }
        }
        cout << endl;
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
 
    int t;
    cin >> t;
    while(t--){
        Solve();
    }
 
    return 0;
}