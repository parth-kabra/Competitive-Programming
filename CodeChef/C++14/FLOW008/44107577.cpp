#include <iostream>
using namespace std;

int main() {
    
    int range;
    cin>>range;
    while (range--){
        int n;
        cin>>n;
	    if(n<10)
	     cout<<"Thanks for helping Chef!"<<"\n";
	    else
	     cout<<-1<<'\n';
    }
    
	return 0;
}
