#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void usaco(string filename = ""){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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

// ds here...
int32_t main(){
    usaco();

    // code here...
    int n;
    cin >> n;
    if(n < 100){
        cout << 0 << endl;
    }
    else if(n % 100 == 0){
        cout << 1 << endl;
    }
    else{
        int cmp = n / 100;
        int rem = n % 100;
        if(cmp * 5 < rem){
            cout << 0 << endl;
        }
        else{
            cout << 1 << endl;
        }
    }

    return 0;
}