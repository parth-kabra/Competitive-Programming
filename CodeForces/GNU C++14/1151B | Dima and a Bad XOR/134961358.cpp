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
 
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    for(int i=0; i < n ;i++){
        for(int j = 0; j< m ;j++){
            cin >> arr[i][j];
        }
    }
    int curr = 0;
    for(int i=0; i < n ;i++){
        curr ^= arr[i][0];
    }
    if(curr){
        cout << "TAK" << endl;
        for(int i=0; i < n ; i++){
            cout <<1 << " ";
        }
        cout<<endl;
    }
    else{
        vector<int> res(n,1);
        for(int i=0; i < n ; i++){
            for(int j=0;j<m;j++){
                if(arr[i][0] != arr[i][j]){
                    res[i] = j+1;
                    cout << "TAK" << endl;
                    for(int i=0; i < n;i++){
                        cout << res[i] << " ";
                    }
                    cout << endl;
                    return 0;
 
                }
            }
        }
        cout << "NIE" << endl;
    }
 
    return 0;
}