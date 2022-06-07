#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int imax=INT_MAX;
const int imin=INT_MIN;
const int mod=1e9+7;
void solve(){int t;cin>>t;while(t--){int n;cin>>n;vector<int> a(n);vector<int> b(n);for(int &i : a){cin>>i;}for(int &i : b){cin>>i;}vector<pair<int,int>> low,high,uttar_;int kabraji001=0;int kabraji002=0;for(int i=0;i<n;i++){if(a[i]<b[i]){low.push_back(make_pair(i,b[i]-a[i]));}else if(a[i]>b[i]){high.push_back(make_pair(i,a[i]-b[i]));}kabraji001+=a[i];kabraji002+=b[i];}if(kabraji001!=kabraji002){cout<<-1<<endl;continue;}int gautam=0;int y=0;while(gautam<low.size() && y<high.size()){int santoshjio=min(low[gautam].second,high[y].second);for(int i=0;i<santoshjio;i++){uttar_.push_back(make_pair(low[gautam].first,high[y].first));}low[gautam].second-=santoshjio;high[y].second-=santoshjio;if(low[gautam].second==0)gautam++;if(high[y].second==0)y++;}if(gautam==low.size() and y==high.size()){cout<<uttar_.size()<<"\n";for(auto it:uttar_){ cout<<it.second+1<<" "<<it.first+1<<endl;}}else{cout<<-1<<endl;}}}
 
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