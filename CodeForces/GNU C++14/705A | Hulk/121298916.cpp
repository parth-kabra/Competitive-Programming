#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int MAX=1e6;
const int mod=1e9+7;
void solve(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        if(i % 2)
            cout << "I love ";
        else
            cout << "I hate ";
        if(i + 1 == n)
            cout << "it\n";
        else
            cout << "that ";
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        solve();
    return 0;
}