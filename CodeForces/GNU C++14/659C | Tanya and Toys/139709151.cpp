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
 
    int n,m;
    cin >> n >> m;
    int arr[n];
    for(int i=0; i < n; i++){
        cin >> arr[i];  
    }
    sort(arr, arr+n);
    int i=1;
    vector<int> res;
    while(i <= m){
        if(!binary_search(arr, arr+n, i)){
            res.push_back(i);
            m-=i;
        }
        i++;
    }
    cout << res.size() << endl;
    for(int &i : res){
        cout << i << " ";
    }
 
    return 0;
}