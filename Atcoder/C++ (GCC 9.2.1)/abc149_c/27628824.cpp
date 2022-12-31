#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
#define endl '\n'
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
//INORDER(L,Root,R)
//PREORDED(Root,L,R)
//POSTORDER(L,R,Root)
template<typename T> using Set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
string strings[3] = {"Odd", "Even", "Same"};
int f(int n){
    int res = 1;
    int even = 0;
    int odd = 0;

    if(n & 1){
        odd++;
    }
    else{
        even++;
    }
    for(int i=1 ; i * i <= n ;i++){
        if(n%i == 0){
            if(i & 1){
                odd++;
            }
            else{
                even++;
            }
        }
    }
    if(even > odd){
        return 1;
    }
    else if(even < odd){
        return 0;
    }
    else{
        return 2;
    }
}
int32_t main(){
    usaco();

    const int N= 1e9+5;

    auto f1 = [&] (int n){
        if(n % 4 == 0){
            return 1;
        }
        else if(n % 2 == 0){
            return 2;
        }
        return 0;
    };

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << strings[f1(n)] << endl;
    }

    return 0;
}