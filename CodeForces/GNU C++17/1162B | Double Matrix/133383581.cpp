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
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int32_t main(){
    IO();
 
    int n,m;
    cin >> n >> m ;
    int arr[n][m];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j < m ;j++){
            cin>>arr[i][j];
        }
    }
    int brr[n][m];
    for(int i=0; i < n ; i++){
        for(int j =0; j < m ;j ++){
            cin>>brr[i][j];
        }
    }
    bool loose = false;
    for(int i = 0; i < n ;i++){
        for(int j = 0 ; j < m ; j++){
            if(arr[i][j] > brr[i][j]){
                std::swap(arr[i][j], brr[i][j]);
            }
        }
    }
 
    // i am gonna loose, i know :) 
 
    bool starchan = false;
    for(int i=0; i < n ;i ++){
        for(int j =0 ; j < m ;j ++){
            if(i > 0 && arr[i][j] <= arr[i-1][j]){
                starchan = true;
                break;
            }
            if(j >0 && arr[i][j] <= arr[i][j-1]){
                starchan=true;
                break;
            }
        }
        if(starchan){
            break;
        }
    }
    // must be false;
    bool kabra = false;
    for(int i = 0; i < n ;i++){
        for(int j = 0; j < m; j++){
            if(i > 0 && brr[i][j] <= brr[i-1][j]){
                kabra = true;
                break;
            }
            if(j > 0 && brr[i][j] <= brr[i][j-1]){
                kabra= true;
                break;
            }
        }
        if(kabra){
            break;
        }
    }
 
    if(!kabra && !starchan){
        cout << "Possible" << endl;
    }
    else{
        cout << "Impossible" << endl;
    }
 
 
    return 0;   
}