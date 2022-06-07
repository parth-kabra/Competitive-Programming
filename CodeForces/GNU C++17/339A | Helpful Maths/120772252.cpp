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
 string s;cin>>s;
 vector<char> res;
 for(char i : s){
  if(i!='+'){
   res.push_back(i);
  }
 }
 sort(res.begin(),res.end());
 for(int i=0;i<res.size()-1;i++){
  cout<<res[i]<<"+";
 }
 cout<<res[res.size()-1];
 cout<<endl;
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