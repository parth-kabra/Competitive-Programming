#include<boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using namespace std;
#include<bits/stdc++.h>
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	     int  n;
	      cpp_int ans=1;
	    cin>>n;
	    if(n==0)
	    cout<<"0"<<endl;
	    for(int i=n;i>0;i--)
	    {
	        ans=ans*i;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}