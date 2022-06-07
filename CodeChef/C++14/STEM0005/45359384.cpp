#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int size){
    int count=0;
    for (int i;i<size;i++){
        if (arr[i]==5){
            count++;
        }
    }
    if (count>0){
        cout<<"Hello World!"<<endl;
    }
    else{
        cout<<"there is no 5 in the array"<<endl;
    }
}
int main(){
    int arr[]={12, 65, 4, 67, 987, 234, 87, 89, 6745, 567, 987, 476, 708, 36, 5587, 798, 884, 671, 7889};
    int size=sizeof(arr)/sizeof(arr[0]);
    solve(arr,size);
    return 0;
}