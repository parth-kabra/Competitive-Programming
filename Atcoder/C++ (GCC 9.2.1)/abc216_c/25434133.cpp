#include<bits/stdc++.h>
using namespace std;
#define all(s) s.begin(),s.end()
void solve(){
unsigned long long int n;
  cin >> n;
 
  string ans;
 
  while (n) {
    if (n % 2 == 0 and n > 1) {
      n /= 2;
      ans.push_back('B');
    } else {
      n--;
      ans.push_back('A');
    }
  }
  reverse(all(ans));
 
  cout << ans << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("op.txt", "w", stdout);
    #endif
        solve();
    return 0;
}