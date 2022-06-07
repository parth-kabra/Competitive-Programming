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
int numberOfMoves(int a,int b){
  if(a%b==0){
    return 0;
  }else if(a < b){
    return b-a;
  }
  else{
    return b-(a%b);
  }
}
void solve(){
  int t;cin>>t;
  while(t--){
    int a,b;
    cin>>a>>b;
    cout<<numberOfMoves(a,b)<<endl;
  }
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