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
 string a,b;
 cin>>a>>b;
 int n=a.length();
 for(int i=0;i<n;i++){
  if(a[i] < 92) a[i]+=32;
  if(b[i] < 92) b[i]+=32;
 }
 if(a < b)cout<<"-1"<<endl;
 if(a > b)cout<<"1"<<endl;
 if(a==b)cout<<"0"<<endl;
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