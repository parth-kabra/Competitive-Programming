#include<bits/stdc++.h>
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
int32_t main(){
    IO();
 
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i =0; i < n ; i++){
        cin>>arr[i];
    }
 
    // ds 
    map<int,int> mp =
    {   
        // if we get pref as 8 and x = 8, then result should increment by 1
        {0, 1}
    };
    int res = 0;
    int pref=0;
    for(int i =0; i < n ; i++){
        pref += arr[i];
        res += mp[pref - x];
        mp[pref]++;
    }
    cout<<res<<endl;
    debug(pref);
 
    return 0;   
}