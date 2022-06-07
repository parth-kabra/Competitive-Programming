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
void leftrotate(string &s, int d){
  reverse(s.begin(), s.begin()+d);
  reverse(s.begin()+d, s.end());
  reverse(s.begin(), s.end());
}
void solve(){
	string s;cin>>s;
	leftrotate(s,1);
	cout<<s<<endl;
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