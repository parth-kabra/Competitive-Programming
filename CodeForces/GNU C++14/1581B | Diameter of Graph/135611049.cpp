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
 
    int t;
    cin >>t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        // number of node in an undirected graph = n(n-1)/2;
 
        int nodesbetween = n * (n-1) / 2;
        //if(nodesbetween < k-1){
        //    cout << "YES" << endl;
        //}
        if(m < n-1){
            cout << "NO" << endl;
        }
        else{
            if(m > nodesbetween){
                cout << "NO" << endl;
            }
            else if(n == 1){
                if(k >= 2){
                    cout << "YES" << endl;
                }
                else{
                    cout << "NO" << endl;
                }
            }
            else if(m == nodesbetween){
                if(k >= 3){
                    cout << "YES" << endl;
                }
                else{
                    cout << "NO" << endl;
                }
            }
            else{
                if(k >= 4){
                    cout << "YES" << endl;
                }
                else{
                    cout << "NO" << endl;
                }
            }
        }
    }
 
    return 0;
}