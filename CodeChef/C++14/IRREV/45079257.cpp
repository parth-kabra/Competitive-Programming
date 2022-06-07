#include <bits/stdc++.h>
using namespace std;
void coprime(int a, int b){
    if(__gcd(a,b)==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main() {
	int t;cin>>t;
	while(t--){
	    int a,b;cin>>a>>b;
	    coprime(a,b);
	}
	return 0;
}
