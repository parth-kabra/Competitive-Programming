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
int32_t main(){
    IO();
 
    int n;
    cin >> n;
 
    vector<int> vertices(n);
    iota(vertices.begin(), vertices.end(), 1);
 
    vector<int> parents;
    parents.push_back(1);
 
    for(int i=0; i < n-1;i++){
        int x;
        cin >> x;
        parents.push_back(x);
    }
 
    int colors[n];
    int nodes = 1;
    for(int i=0; i < n;i++){
        cin >> colors[i];
        if(colors[i] != colors[parents[i]-1]){
            nodes++;
        }
    }
    cout<<nodes<<endl;
 
    return 0;
}