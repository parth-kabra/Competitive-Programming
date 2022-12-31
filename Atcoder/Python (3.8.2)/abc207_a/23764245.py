#include <iostream>
using namespace std;
int main(){
  int n;cin>>n;
  int k=(1.08)*n;
  if(k<206) cout<<"Yay!";
  else if(k==206) cout<<"so-so";
  else cout<<":(";
  return 0;
}