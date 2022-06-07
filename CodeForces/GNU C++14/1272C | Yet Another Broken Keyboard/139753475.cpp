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
map<char,bool> vis;
int32_t main(){
    usaco();
 
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    char live[k];
    for(int i=0; i < n ;i++){
        cin >> live[k];
        vis[live[k]] = true;
    }
 
    int sum = 0;
    int curr_sub = 0;
    for(int i=0; i <n ;i++){
        if(vis[s[i]]){
            curr_sub++;
        }
        else{
            sum += (curr_sub * (curr_sub + 1) / 2);
            curr_sub = 0;
        }
    }
    debug(curr_sub)
    debug(sum)
 
    cout << sum + curr_sub * (curr_sub + 1) / 2 << endl;
 
    return 0;
}