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
struct point{
    int x, y;
    point(const int &x, const int &y){
        this->x = x;
        this->y = y;
    };
};
/*
int getDistance(x0, y0, x1, y1)
    horizontal = abs(x1-x0)
    vertical = abs(y0-y1)
    return horizontal + vertical
*/
int getDistance(int x0, int y0, int x1, int y1){
    int h = abs(x1 - x0);
    int v = abs(y0 - y1);
    return h+v;
}
void Solve(){
    int n, m;
    cin >> n >> m;
    vector<point> arr;
    for(int i=0; i < n;i++){
        for(int j = 0; j < m;j++){
            char x;
            cin >> x;
            if(x == 'o'){
                arr.push_back(point(i, j));
            }
        }
    }
    /*
    for(const point &i : arr){
        cout << i.x << " " << i.y << endl;
    }*/

            const point &a = arr[0];
            const point &b = arr[1];
            const int dist = abs(a.x - b.x) + abs(b.y - a.y);
    cout << dist << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();

    int T = 1;
    //cin >> T;
    while(T--){
        Solve();
    }
    return 0;

}
