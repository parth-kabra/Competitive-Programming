#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int SS;
   cin>>SS;
   int a[21]={0,1,1,1,2,3,5,9,18,35,75,159,355,802,1858,4347,10359,24894,60523,148284,366319};
   while(SS--)
   {
      int n;//no of carbon atom
      cin>>n;
      cout<<a[n]<<"\n";
   }
      
}