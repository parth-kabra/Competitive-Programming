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
 int n,m,c;
 cin>>n;
 vector<int> a(n);
 vector<int> b(n);
 cin>>a[0]>>b[0];
 c=m=b[0];
 for(int i=1;i<n;i++){
  cin>>a[i]>>b[i];
  c=c-a[i]+b[i];
  if(c > m) m=c;
 }
 cout<<m<<endl;
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