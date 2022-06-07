#include<bits/stdc++.h>
using namespace std;
void odd(int a,int b){
    for(int i=a;i<=b;i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int a,b;cin>>a>>b;
    odd(a,b);
    return 0;
}