#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void usaco(string filename = ""){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
int32_t main(){
    usaco();
 
    int n,k;
    cin >> n >> k;
    int w[n];
    for(int i=0; i < n ;i++){
        cin >> w[i];
    }
 
    vector<int> ar;
    for(int i=0; i < n ;i++){
        ar.push_back((w[i] + k - 1) / k);
    }
    cout << (accumulate(ar.begin(), ar.end(), 0LL)+1) / 2 << endl;
 
    return 0;
}