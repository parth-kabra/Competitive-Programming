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
list<int> d;
int32_t main(){
    usaco();

    // code here...
    int n;
    cin >> n;
    for(int i = 0;i <n;i++){
        int t = n-i;
        int x;
        cin>>x;
        if(t & 1){
            d.push_front(x);
        }
        else{
            d.push_back(x);
        }
    }
    for(int i : d){
        cout << i << " ";
    }

    return 0;
}