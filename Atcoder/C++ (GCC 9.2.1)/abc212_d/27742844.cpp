#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
#define endl '\n'
const int mod = 1e9+7;
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
//INORDER(L,Root,R)
//PREORDED(Root,L,R)
//POSTORDER(L,R,Root)
template<typename T> using Set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using Multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
Multiset<int> ms;
int two = 0;

int32_t main(){
    usaco();

    // code here...
    int n;
    cin >> n;
    while(n--){
        int q;
        cin >> q;
        if(q == 1){
            int x;
            cin >> x;
            ms.insert(x - two);
        }
        else if(q == 2){
            int x;
            cin >> x;
            two += x;
        }
        else{
            cout << *ms.begin() + two << endl;
            ms.erase(ms.begin());
            debug(ms.size());
        }
    }
    return 0;
}