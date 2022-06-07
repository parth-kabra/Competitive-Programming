#include<bits/stdc++.h>
using namespace std;
#define int long long
const int imax=(1LL<<31)-1;
const int imin=-2147483648;
const int mod=1e9+7;
const int N=1e5+10;
void solve(){
    int n;
    cin>>n;
    vector<string>str(n,".");
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    string ans="";
    for(int i=0;i<n;i++)
    {
        if(str[i][i]=='0')
        {
            ans+='1';
        }
        else
        {
            ans+='0';
        }
    }
    cout<<ans<<endl;
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("op.txt", "w", stdout);
    #endif
        int t;
        cin>>t;
        while(t--){
            solve();
        }
    return 0;
}