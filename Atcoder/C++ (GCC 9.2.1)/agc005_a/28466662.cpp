#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void usaco(string filename = ""){
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
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    usaco();
        
    string s;
    cin >> s;
    int n = s.size();
    int  k = 0;
    stack<char> st;
    for(int i=0; i < n ;i++){
        if(s[i] == 'S'){
            st.push('S');
        }
        if(s[i] == 'T'){
            if(!st.empty()){
                st.pop();
                k += 2;
            }
        }
    }
    cout << n - k << endl;

    return 0;
}