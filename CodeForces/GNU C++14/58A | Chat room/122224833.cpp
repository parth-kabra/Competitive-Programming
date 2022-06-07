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
    string todo="hello";
    int j=0;
    int res=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==todo[j]){
            res++;
            j++;
        }
        if(res==5) break;
    }
    //cout<<(res==5) ? "YES" : "NO";
    if(res==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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