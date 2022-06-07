#include <bits/stdc++.h>
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
//INORDER(L,Root,R)
//PREORDED(Root,L,R)
//POSTORDER(L,R,Root) 
 
int32_t main(){
    IO();
 
    int n;
    cin >> n ;
    int a,b,c;
    cin >>a >> b >>c;
    if(n == 1){
        cout << 0 << endl;
    }
    else{
        cout << (min({a,b}) + min({a,b,c}) * (n-2)) << endl;
    }
 
    return 0;
}