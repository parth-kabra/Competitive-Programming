#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
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
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    usaco();
        
    using T = pair<int,int>;
    priority_queue<pair<int,int>> pq;
    int n,k;
    cin >> n >> k; 
    int arr[n];
    for(int i=0; i < n ;i++){
        cin >> arr[i];
    }
    for(int i=0; i < k ; i ++){
        pq.push({arr[i], i+1});
    }
    cout << pq.top().second << endl;
    for(int i=k;i < n ; i++){
        pq.push({arr[i], i+1});
        pq.pop();
        cout << pq.top().second << endl;
    }

    return 0;
}