#include <iostream>
using namespace std;
int main() {
    char a;
    char b;
    int c;
    cin>>c;
    for (int i=1;i<c+1;i++){
        char usr;
        cin>>usr;
        if (usr=='b'||usr=='B'){
            cout<<"BattleShip"<<endl;
        }else if (usr=='c'||usr=='C'){
            cout<<"Cruiser"<<endl;
        }else if (usr=='d'||usr=='D'){
            cout<<"Destroyer"<<endl;
        }else if (usr=='f'||usr=='F'){
            cout<<"Frigate"<<endl;
        }
    }
    return 0;
}