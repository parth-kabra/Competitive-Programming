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
queue<pair<int,int>> mono; // who can first will be serverd :uwu:
priority_queue<pair<int,int>> poly; // max val, index of the customers will stay at the top :uwu:
const int N = 1000000;
bool vis[N];
vector<int> res;
void Solve(){
    int t;
    cin >> t;
    int inc = 0;
    for(int i=1; i <= t;i++){
        int type;
        cin >> type;
        if(type == 1){
            inc++;
            int m;
            cin >> m;
            mono.push({m, -inc});
            poly.push({m,-inc});
        }
        else{
            if(type == 2){
                while(vis[-mono.front().second]){
                    mono.pop();
                }
                vis[-mono.front().second] = true;
                res.push_back(-mono.front().second);
            }
            else{
                while(vis[-poly.top().second]){
                    poly.pop();
                }
                vis[-poly.top().second] = true;
                res.push_back(-poly.top().second);
            }
        }
    }
    for(int &i : res){
        cout << i << " ";
    }
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