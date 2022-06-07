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
 vector<int> arr;
 for(int i=0;i<4;i++){
  int m;cin>>m;
  arr.push_back(m);
 }
 sort(arr.begin(),arr.end());
 int res=3;
 for(int i=0;i<3;i++){
  if(arr[i]!=arr[i+1]) res--;
 }
 cout<<res<<endl;
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