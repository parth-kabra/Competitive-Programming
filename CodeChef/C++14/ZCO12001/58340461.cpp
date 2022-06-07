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
    int n;
    cin >> n;
    int depth = 0;
    int maxdepth = 0;
    int depthind = 0;
    int len = 0;
    int maxlen = 0;
    int lenind = 0;
    int bstart = 0;
    
    for(int i=1; i <= n;i++){
        if(depth == 0){
            len = 0;
            bstart = i;
        }
        
        int x;
        cin >> x;
        
        len++;
        
        if(x == 1) depth++;
        else depth--;
        
        if(depth > maxdepth){
            maxdepth = depth;
            depthind = i;
        }
        
        if(len > maxlen){
            maxlen = len;
            lenind = bstart;
        }
    }
        
    vector<int> res = {
        maxdepth,
        depthind,
        maxlen,
        lenind
    };
    for(const int &i : res){
        cout << i << " ";
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