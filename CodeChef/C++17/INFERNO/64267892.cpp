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
bool f(vector<int> &arr){
    for(int &i : arr){
        if(i > 0){
            return true;
        }
    }
    return false;
}
void Solve(){
    int n,x;
    cin >> n >> x;
    vector<int> arr(n), brr(n);
    for(int i =0; i < n;i++){
        cin >> arr[i];
        brr[i] = arr[i];
    }
    int a = 0, b = 0;
    while(f(arr)){
        for(int &i : arr){
            if(i > 0){
                i-=x;
                a++;
            }
        }
    }
    while(f(brr)){
        for(int &i : brr){
            if(i > 0){
                i--;
            }
        }
        b++;
    }

    cout << min(a, b) << endl;
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
