#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;cin>>n;
    if((n%5==0)&&(n%11==0)){
        cout<<"BOTH"<<endl;
    }
    else if((n%5==0)||(n%11==0)){
        cout<<"ONE"<<endl;
    }
    else{
        cout<<"NONE"<<endl;
    }
    return 0;
}