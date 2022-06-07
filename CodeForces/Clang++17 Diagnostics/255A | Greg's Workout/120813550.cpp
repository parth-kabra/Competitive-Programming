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
  int n, t, a(0), b(0), c(0);
  cin >> n;
 
  for (int i = 1; i <= n; i++)
  {
    cin >> t;
    if (i % 3 == 1)
      a += t;
    else if (i % 3 == 2)
      b += t;
    else
      c += t;
  }
 
  if (a > b and a > c)
    cout << "chest" << endl;
  else if (b > a and b > c)
    cout << "biceps" << endl;
  else
    cout << "back" << endl;
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