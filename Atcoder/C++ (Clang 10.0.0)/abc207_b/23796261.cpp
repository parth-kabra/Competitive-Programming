#include <iostream>
#include<math.h>
using namespace std;
#define ll long long
#define lld long double
#define IOS ios_base::sync_with_stdio(false);cin.tie(nullptr); cout.tie(nullptr);


int main()
{
    IOS
    int a,b,c,d;
  cin>>a>>b>>c>>d;
  
  int x=(d*c)-b;
  if(x<=0)
  cout<<-1<<'\n';

  else
  {
      double k= ceil((double)a/(double)x);
      cout<<(int)k<<'\n';
  }
  
}