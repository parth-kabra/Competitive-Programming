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
    int n,a,b;
    cin >> n >> a >> b;
    int arr[n];
    int reserve = 0;
    int d = 0;
    for(int i=0; i < n;i++){
        cin >> arr[i];
        if(arr[i] == 2){
            if(b > 0){
                b--;
            }
            else{
                d += 2;
            }
        }
        else if(arr[i] == 1){
            if(a > 0){
                a--;
            }
            else if(b > 0){
                b--;
                reserve++;
            }
            else if(reserve > 0){
                reserve--;
            }
            else{
                d++;
            }
        }
    }
    debug(d)
    cout << d << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
 
 
    int t = 1;
    //cin >> t;
    while(t--){
        Solve();
    }
 
    return 0;
}