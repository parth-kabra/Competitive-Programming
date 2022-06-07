#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int max=0;
    for(int i=1;i<=10;i++){
        if(n%i==0){
            max=i;
        }
    }
    cout<<max<<endl;
    return 0;
}