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
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
    
    int t;
    cin >> t;
    while(t--){
        priority_queue<pair<int,int>> q;
        map<int,int> mp;
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i < n ;i++){
            cin >> arr[i];
            mp[arr[i]]++;
        }
        for(auto it : mp){
            q.push({it.second, it.first});
        }
        int res = n;
        while(q.size() >= 2){
            int cnt,x;
            tie(cnt, x) = q.top();
            q.pop();
            int cnt1, x1;
            tie(cnt1, x1) = q.top();
            q.pop();
            cnt--;
            cnt1--;
            res -= 2;
            if(cnt){
                q.push({cnt, x});
            }
            if(cnt1){
                q.push({cnt1, x1});
            }
        }
        cout << res << endl;
    }
 
    return 0;
}