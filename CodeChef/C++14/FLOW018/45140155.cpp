#include<bits/stdc++.h>
using namespace std;
int fac(int n){
    int fact=1;
    for (int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int t;cin>>t;
    while (t--){
        int n;cin>>n;
        int ans=fac(n);
        cout<<ans<<endl;
    }
    return 0;
}