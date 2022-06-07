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
 
map<string, int> days;
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
 
    vector<string> d = {
        "monday",
        "tuesday",
        "wednesday",
        "thursday",
        "friday",
        "saturday",
        "sunday"
    };
 
    for(int i=0; i < 7;i++){
        days[d[i]] = i;
    }
 
    string a, b;
    cin >> a >> b;
 
    int A = days[a];
    int B = days[b];
    if(A == B){
        cout << "YES" << endl;
    }
    else if(B == (A + 2) % 7){
        cout << "YES" << endl;
    }
    else if(B == (A + 3) % 7){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
 
    return 0;
}