#include <bits/stdc++.h>
using namespace std;
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void usaco(string filename = ""){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if(filename.size() > 0){
        #ifndef ONLINE_JUDGE
            freopen((filename + ".in").c_str(), "r", stdin);
            freopen((filename + ".out").c_str(), "w", stdout);
        #endif
    }
    else{
        #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
            freopen("error.txt", "w", stderr); 
        #endif
    }
} 	

int main(){

	usaco();
	
    int n,w;
    cin >> n >> w;

    if(w > n){
        cout << 0 << endl;
    }
    else{
        cout << n / w << endl;
    }

}
