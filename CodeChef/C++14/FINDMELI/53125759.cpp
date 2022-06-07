/*
██████╗  █████╗ ██████╗ ████████╗██╗  ██╗        ██╗  ██╗ █████╗ ██████╗ ██████╗  █████╗ 
██╔══██╗██╔══██╗██╔══██╗╚══██╔══╝██║  ██║        ██║ ██╔╝██╔══██╗██╔══██╗██╔══██╗██╔══██╗
██████╔╝███████║██████╔╝   ██║   ███████║        █████╔╝ ███████║██████╔╝██████╔╝███████║
██╔═══╝ ██╔══██║██╔══██╗   ██║   ██╔══██║        ██╔═██╗ ██╔══██║██╔══██╗██╔══██╗██╔══██║
██║     ██║  ██║██║  ██║   ██║   ██║  ██║███████╗██║  ██╗██║  ██║██████╔╝██║  ██║██║  ██║
╚═╝     ╚═╝  ╚═╝╚═╝  ╚═╝   ╚═╝   ╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝
*/
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

    // code here...

    int n,k;
    cin>>n>>k;
    int arr[n];
    int x;
    while(cin >> x){
        if(x == k){
            cout<<"1"<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;

    return 0;
    
}