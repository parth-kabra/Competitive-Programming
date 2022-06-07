#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void IO(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);freopen("error.txt", "w", stderr); 
    #endif
}
//INORDER(L,Root,R)
 
//PREORDED(Root,L,R)
 
//POSTORDER(L,R,Root) 
int32_t main(){
 IO();
 
 int n;
 cin >>n ;
 string s;
 cin >>s;
 int timer =INT_MAX;
 for(int i=0; i < n - 1; i++){
  if(s[i] == s[i+1]){
   timer = i+1;
   break;
  }
 }
 set<char> sep(s.begin(), s.end());
 int sepl = sep.size();
 if(timer == INT_MAX){
  cout << sepl << endl;
 }
 else{
  const int N = 2 * 1e5;
  int dp[N] = {0};
  for(char x : sep){
   int k = -1;
   for(int i=0; i < n ;i++){
    if(s[i] == x){
     k=i;
    }
    if(k==-1){
     dp[i] = n;
    }
    else{
     dp[i] = max(dp[i],i-k+1);
    }
   }
  }
  cout << *min_element(dp,dp+n) << endl;
 }
 
 return 0;
}