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
 int n;cin>>n;
 string s;
 cin>>s;
 int r=0,g=0,b=0;
 for(int i=0;i<n;i++){
  if(s[i-1]==s[i]){
   if(s[i]=='R')r++;
   if(s[i]=='G')g++;
   if(s[i]=='B')b++;
  }
 }
 cout<<r+b+g<<endl;
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