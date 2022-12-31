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
bool prime(int n){
    if(n == 0 || n == 1){
        return false;
    }
    if(n == 2){
        return true;
    }
    if(!(n&1)){
        return false;
    }
    for(int i =3; i * i <= n;i+=2){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int32_t main(){
    usaco();

    int n;
    cin >> n;
    if(prime(n)){
        cout << n << endl;
    }
    else{
        const int N = 1e5+5;
        while(true){
            if(prime(n)){
                cout << n << endl;
                return 0;
            }
            n++;
        }
    }

    return 0;
}