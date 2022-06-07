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
 
    int n;
    cin >> n;
    int m = (n >> 1) + 1;
    cout << m << endl;
    int a = 1;
    int b = 1;
    for(int i=0; i < n ;i++){
        cout << a << " " << b << endl;
        if(a < m){
            a++;
        }
        else{
            b++;
        }
    }
    
 
    return 0;
}