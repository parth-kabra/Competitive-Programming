#include <iostream>
using namespace std;

int main() {
    
    //'A', 'E', 'I', 'O', 'U'.
    char a;cin>>a;
    if (a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
        printf("Vowel");
    }else{
        printf("Consonant");
    }
    
	return 0;
}
