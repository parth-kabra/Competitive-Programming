#include <iostream>
using namespace std;

int main() {
    
    int range;
    cin>>range;
    while (range--){
        int a,b;
        cin>>a>>b;
        if (a>b){
            cout<<">"<<endl;
        }else if (a<b){
            cout<<"<"<<endl;
        }else{
            cout<<"="<<endl;
        }
    }
    
	return 0;
}
