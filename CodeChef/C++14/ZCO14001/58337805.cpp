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
    int n,h;
    cin >> n >> h;
    int arr[n];
    for(int i=0; i < n;i++){
        cin >> arr[i];
    }
    bool picked = false;
    int crane = 0;  
    int x;
    while(cin >> x){
        if(!x) break;
        switch(x){
            case 1:
                if(crane > 0){
                    crane--;
                }
                break;
            case 2:
                if(crane < n - 1){
                    crane++;
                }
                break;
            case 3:
                if(!picked){
                    if(arr[crane] > 0){
                        picked = true;
                        arr[crane]--;
                    }
                }
                break;
            case 4:
                if(picked){
                    if(arr[crane] < h){
                        picked = false;
                        arr[crane]++;
                    }
                }
        }
    }
    for(int i=0; i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
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