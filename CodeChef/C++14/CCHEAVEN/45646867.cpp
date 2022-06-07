/*
		 ____                   _     _         _  __          _                    
		|  _ \    __ _   _ __  | |_  | |__     | |/ /   __ _  | |__    _ __    __ _ 
		| |_) |  / _` | | '__| | __| | '_ \    | ' /   / _` | | '_ \  | '__|  / _` |
		|  __/  | (_| | | |    | |_  | | | |   | . \  | (_| | | |_) | | |    | (_| |
		|_|      \__,_| |_|     \__| |_| |_|   |_|\_\  \__,_| |_.__/  |_|     \__,_|

*/

#include <bits/stdc++.h>
using namespace std;
void solve()
{
 int t;
 cin>>t;
 while(t--){
  int ans;
  cin>>ans;
  char arr[ans];
  int yes=0;
  bool boolean=false;
  for(int i=0;i<ans;i++){
   cin>>arr[i];
   if(arr[i]=='1'){
    yes++;
    if((yes*100)/(i+1)>=50){
     boolean=true;
    }
   }
  }
  if(boolean==1)
   cout<<"YES\n";
  else
   cout<<"NO\n";
 }
}
int main(){
	solve();
	return 0;
}