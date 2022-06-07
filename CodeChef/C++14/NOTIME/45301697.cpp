#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h,x;cin>>n>>h>>x;
    int count=0;int no=0;
    int arr[n];
    for(int i;i<n;i++){
        cin>>arr[i];
    }
    for(int j;j<n;j++){
        if (x+arr[j]==h){count++;}
        else{no++;}
    }
    if (count>0){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
    return 0;
}