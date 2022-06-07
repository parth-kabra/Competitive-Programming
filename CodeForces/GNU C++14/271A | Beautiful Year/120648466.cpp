#include<iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include<map>
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
 int n;cin>>n;
 int res=0;
 while(true){
  n++;
  int a=n/1000;
  int b=n/100%10;
  int c=n/10%10;
  int d=n%10;
  if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)break;
 }
 cout<<n<<endl;
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