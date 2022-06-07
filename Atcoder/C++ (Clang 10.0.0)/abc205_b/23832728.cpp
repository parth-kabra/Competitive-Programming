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
	vector<int> arr;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		arr.push_back(a);
	}
	sort(arr.begin(),arr.end());
	string res="Yes";
	for(int i=0;i<n;i++){
		if(arr[i]!=i+1){
			res="No";
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