#include<iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include<map>
#include <cctype>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <string>
using namespace std;
#define int long long
const int MAX=1e6;
void solve(){
 int n, k, l, c, d, p, nl, np;
 cin>>n>>k>>l>>c>>d>>p>>nl>>np;
 vector<int> res;
 res.push_back((k*l)/(n*nl));
 res.push_back((c*d)/n);
 res.push_back(p/(n*np));
 cout<<*min_element(res.begin(),res.end());
}
int32_t main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
 #endif
     solve();
 return 0;
}