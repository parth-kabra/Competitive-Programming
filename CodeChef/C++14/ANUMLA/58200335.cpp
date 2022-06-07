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
    multiset<int> ms;
    for(int i=0; i < (1 << n ); i++){
        int x;
        cin >> x;
        ms.insert(x);
    }
    vector<int> t;
    t.push_back(0);
    vector<int> res;
    ms.erase(ms.find(0));
    while(ms.size()){
        int x = *ms.begin();
        res.push_back(x);
        int s = t.size();
        for(int i=0; i < s;i++){
            ms.erase(ms.find(t[i] + x));
            t.push_back(t[i] + x);
        }
    }
    for(int i : res){
        cout << i << " ";
    }
    cout << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();

    int t = 1;
    cin >> t;
    while(t--){
        Solve();
    }
 
    return 0;
}