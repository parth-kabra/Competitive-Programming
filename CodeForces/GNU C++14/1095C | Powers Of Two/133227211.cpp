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
const int N = 1e5;
int arr[1000000];
 
int32_t main(){
    IO();
 
    // code here...
 
    /*auto prime = [] (int n ){
        for(int i = 2; i*i <= n ;i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    };
 
 
    if(prime(n)){
        cout<<"NO"<<endl;
    } 
    else{*/
    int n, k ;
    cin>> n >> k;
        //vector<int> arr(N);
    fill(arr, arr + k , 1);
    int sum = k;
    for(int i = 0 ;i < k ; i++){
        while(arr[i] + sum <= n){
            sum += arr[i];
            arr[i]*=2;
        }
    }
    if(sum != n){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        for(int i = 0; i < k; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    //}
 
    return 0;
    
}