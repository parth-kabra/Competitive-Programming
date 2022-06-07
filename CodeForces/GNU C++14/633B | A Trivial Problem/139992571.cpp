#include <bits/stdc++.h>
using namespace std;
#define int long long
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
int32_t main(){
    usaco();
 
    auto f = [&] (int n) -> int {
        if(n < 0) return 0;
        int res = 0;
        while (n >= 5){
            n /= 5;
            res += n;
        }
        return res;
    };
 
    int n;
    cin >> n;
    vector<int> res;
    int i = 5;
    while(true){
        int x = f(i);
        if(x == n){
            res.push_back(i);
        }
        else if(x > n){
            break;
        }
        i++;
    }
    cout << res.size() << endl;
    for(int &i : res){
        cout << i << " ";
    }
 
    return 0;
}