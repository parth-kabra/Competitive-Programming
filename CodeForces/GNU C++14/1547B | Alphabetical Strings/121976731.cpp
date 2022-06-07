#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int imax=INT_MAX;
const int imin=INT_MIN;
const int mod=1e9+7;
void solve(){
    string s;
    cin>>s;
    set<char> order;
    int parth=0;
    int n=s.length();
    for(int i=0;i<n;i++){
        order.insert(s[i]);
        if(s[i]>97+s.size()-1){
            parth=1;
        }
    }
    if(order.size()!=s.size()){
        cout<<"NO"<<endl;
        return;
    }
    if(parth==1){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=1;i<n-1;i++){
        if(s[i]>s[i-1] && s[i] > s[i+1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        int t;cin>>t;
        while(t--){
            solve();
        }
    return 0;
}