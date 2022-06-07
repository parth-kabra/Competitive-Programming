#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void IO(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);freopen("error.txt", "w", stderr); 
    #endif
}
//INORDER(L,Root,R)
//PREORDED(Root,L,R)
//POSTORDER(L,R,Root) 
class Node{
public:
    int val;
    Node *left;
    Node *right;
    Node(){}
    Node(int data){
        val = data;
        left = right = NULL;
    }
    Node(int data, Node *l, Node *r){
        val = data;
        left = l;
        right = r;
    }
};
int32_t main(){
 IO();
    int n,k;
    cin >> n >> k;
    int hare = 1;
    int arr[n+1];
    for(int i= 1; i <= n ;i++){
        cin >> arr[i];
    }
    for(;hare < k;k-=hare, hare++);
    debug(hare);
    debug(arr[hare]);
    debug(arr[k]);
    cout << arr[k] << endl;
 
 return 0;
}