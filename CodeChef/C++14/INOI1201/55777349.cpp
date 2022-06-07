#include<bits/stdc++.h>
using namespace std;
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void usaco(string filename = ""){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if(filename.size() > 0){
        #ifndef ONLINE_JUDgE
            freopen((filename + ".in").c_str(), "r", stdin);
            freopen((filename + ".out").c_str(), "w", stdout);
        #endif
    }
    else{
        #ifndef ONLINE_JUDgE
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
            freopen("error.txt", "w", stderr); 
        #endif
    }
}
struct edge{
    int x,y,wt;
    bool operator<(edge &a){
        return a.y + a.wt < y + wt;
    }
};
int32_t main(){
   // usaco();
 
    int n;
    cin >> n;
    vector<edge> arr(n);
    for(int i=0; i < n ;i++){
        cin >> arr[i].x >> arr[i].y >> arr[i].wt;
    }
    sort(arr.begin(), arr.end());
    int sum = 0;
    int res = 0;
    for(edge i : arr){
        res = max(res, sum + i.x + i.y + i.wt);
        sum += i.x;
    }
    cout << res << endl;

    return 0;
}