#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;cin>>t;
    while (t--){
        ll m,h;cin>>m>>h;
        ll ans=m/(h*h);
        if (ans<=18){
            cout<<1<<endl;
        }
        else if(ans>=19&&ans<=24){
            cout<<2<<endl;
        }
        else if(ans>=25&&ans<=29){
            cout<<3<<endl;
        }
        else{
            cout<<4<<endl;
        }
    }
    return 0;
}