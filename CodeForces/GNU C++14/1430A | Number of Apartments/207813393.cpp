#include<bits/stdc++.h>
using namespace std;
 
 
/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T> using Set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using Multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
*/
 
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
 
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
// om hanumante namah
 
void Solve(){
    int n;
    cin >> n;
    if(n == 3){
        cout << 1 << " 0 0" << endl;
        return;
    }
    if(n <= 4){
        cout << -1 << endl;
        return;
    }
    if(n % 3 == 0){
        cout << n / 3 << " 0 0" <<endl;
    }
    else if(n % 5 == 0){
        cout << 0 << " " << n / 5 << " 0" << endl;
    }
    else if(n % 7 == 0){
        cout << "0 0 " << n / 7 << endl;
    }
    else{
        int n1 = n;
        while(n1 % 10 != 0){
            n1--;
        }
        if(n % 10 == 1){
            n1 -= 5;
            // curr = 5, 3, 7
            // do = 3, 5, 7
            //cout << n1 / 5 << " " << 2 << " " << 0 << endl;
            cout << 2 << " " << n1 / 5 << " 0" << endl; 
        }
        else if(n % 10 == 2){
            n1 -= 10;
            //cout << n1 / 5 + 1 << " " << 0 << " " << 1 << endl;
            cout << "0 " << n1 / 5 + 1 << " 1" << endl;
        }
        else if(n % 10 == 3){
            //cout << n1 / 5 << " " << 1 << " " << 0 << endl;
            cout << "1 " << n1/ 5 <<" 0" << endl;
        }
        else if(n % 10 == 4){
            n1 -= 10;
            //cout << n1 / 5 + 1 << " " << 3 << " " << 0 << endl;
            cout << "3 " << n1 / 5 + 1 << " 0" << endl;
        }
        else if(n % 10 == 6){
            //cout << n1 / 5 << " " << 2 << " " << 0 << endl;
            cout << "2 " << n1 / 5 << " 0" << endl;
        }
        else if(n % 10 == 7){
            //cout << n1 / 5 << " " << 0 << " " << 1 << endl;
            cout << "0 " << n1 / 5 << " 1" << endl;
        }
        else if(n % 10 == 8){
            //cout << n / 5  << " " << 1 << " " << 0 << endl;
            cout << "1 " << n / 5 << " 0" <<endl;
        }
        else if(n % 10 == 9){
            //cout << n / 5 - 1 << " " << 3 << " " << 0 << endl;
            cout << "3 " << n1 / 5 << " 0" << endl;
        }
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
 
    int T = 1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
 
}