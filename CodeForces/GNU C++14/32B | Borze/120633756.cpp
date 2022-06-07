#include<iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std;
#define int long long
const int MAX=1e6;
void solve(){
 string s;cin>>s;
 int n=s.length();
 string res="";
 for (int i=0;i<n;i++){
  if(s[i]=='.') res+='0';
  else if(s[i]=='-' && s[i+1]=='.'){
   res+='1';
   i++;
  }
  else if(s[i]=='-' && s[i+1]=='-'){
   res+='2';
   i++;
  }
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