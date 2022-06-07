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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i < n;i++){
            cin >> arr[i];
        }
        sort(arr, arr+n,greater<int>());
        int a = 0;
        for(int i=0; i < n ;i++){
            if(!(i & 1)){
                if(arr[i] % 2 == 0){
                    a += arr[i];
                }
            }
            else{
                if(arr[i] & 1){
                    a -= arr[i];
                }
            }
        }
        if(a > 0){
            cout << "Alice" << endl;
        }
        else if(a == 0){
            cout << "Tie" << endl;
        }
        else{
            cout << "Bob" << endl;
        }
    }
    return 0;
}