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
map<string ,bool> vis;
 
int32_t main(){
    usaco();
 
    int n;
    cin >> n;
    string arr[n] ;
    stack<string> s;
    for(int i =0 ; i < n;i++){
        cin >> arr[i];
        s.push(arr[i]);
    }   
    while(!s.empty()){
        if(!vis[s.top()]){
            cout << s.top() << endl;
            vis[s.top()] = true;
        }
        s.pop();
    }
 
 
    return 0;
}