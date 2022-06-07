#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
// set
template<typename T> using Set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// multiset
template<typename T> using Multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// map
template<class key, class value, class cmp = less<key>> using Map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
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
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
        
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        map<int,int> f;
        for(int i=0; i < n;i++){
            cin >> arr[i];
            f[arr[i]]++;
        }
        bool extra = false;
        for(int i=0; i < n ;i++){
            if(f[arr[i]] > 1){
                extra = true;
                break;
            }
            if(extra){
                break;
            }
        }
        if(!extra){
            cout << -1 << endl;
        }
        else if(f.size() == 1){
            cout << n - f.size() << endl;
        }
        else{
            map<int,int> f1;
            int res = 0;
            for(int i=0; i < n ;i++){
                if(f1.find(arr[i]) != f1.end()){
                    res = max(res, f1[arr[i]] + (n - i));
                }
                f1[arr[i]] = i;
            }
            cout << res << endl;
        }
    }    
 
    return 0;
}