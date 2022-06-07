#include<bits/stdc++.h>
using namespace std;
int tet(int n){
    return (n * (n + 1) * (n + 2)) / 6;
}
int main(){
    int ans=tet(6);
    cout<<ans<<endl;
    return 0;
}