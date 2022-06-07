#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
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
    int size = n - k + 1;
    int arr[n];
    for(int i=0; i < n;i++){
        cin >> arr[i];
    }
    int t[n];
    for(int i=0; i < n;i++){
        cin >> t[i];
    }
    int before = 0 ;
    for(int i=0; i < n;i++){
        if(t[i]){
            before += arr[i];
            arr[i] = 0;
        }
    }
    int s = 0;
    for(int i=0; i < k;i++){
        s += arr[i];
    }
    int boost = s;
    for(int i=k;i <n;i++){
        s = s- arr[i-k] + arr[i];
        boost = max(s, boost);
    }
    cout << before + boost << endl;
 
    return 0;
}