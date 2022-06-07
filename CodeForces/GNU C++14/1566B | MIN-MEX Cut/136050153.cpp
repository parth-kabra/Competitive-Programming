#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void IO(const char* I ="input.txt",const char* O="output.txt", const char*E="errot.txt"){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen(I, "r", stdin);freopen(O, "w", stdout);freopen("error.txt", "w", stderr); 
    #endif
}
//INORDER(L,Root,R)
//PREORDED(Root,L,R)
//POSTORDER(L,R,Root)
int32_t main(){
    //IO("berries.in","berries.out");
    IO();
 
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int count = 0;
        for(int i=0; i < n; i ++){
            if(s[i] == '0' && (i == 0 || s[i-1] == '1')){
                count++;
            }
        }
        debug(count);
        cout << min(count, 2LL) << endl;
    }
 
    return 0;
}