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
int power(int a, int b){
    int res = 1;
    while(b){
        if(b&1){
            res = res * a;
        }
        a = a * a;
        b >>= 1;
    }
    return res;
}
int32_t main(){
    usaco();
 
    int t;
    cin>>t;
    while(t--){
        int a,p1, b , p2;
        cin >> a >> p1 >> b >> p2;
        int mn = min(p1, p2);
        p1-=mn;
        p2-=mn;
 
        if(p1 > 6){
            cout << '>' << endl;
            continue;
        }
        else if(p2 > 6){
            cout << '<' << endl;
            continue;
        }
 
        a *= power(10, p1);
        b *= power(10, p2);
 
        if(a > b){
            cout << '>' << endl;
        }
        else if(a < b){
            cout << '<' << endl;
        }
        else{
            cout << '=' << endl; 
        }
    }
 
    return 0;
}