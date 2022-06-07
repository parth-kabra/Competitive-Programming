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

    int n;
    cin >> n;
    string s;
    cin >> s;

    stack<char> st;
    for(int i = 0 ; i < n;i++){
        st.push(s[i]);
        if(st.size() >= 3){
            string pref = "";
            pref += st.top();
            st.pop();
            pref += st.top();
            st.pop();
            pref += st.top();
            st.pop();
            if(pref != "xof"){
                st.push(pref[2]);
                st.push(pref[1]);
                st.push(pref[0]);
            }
        }
    }
    cout << st.size() << endl;


    return 0;
}