#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
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
bool isPalindrome(string str)
{
    int n = str.size();
    for (int i=0; i < n/2; i++)
        if (str.at(i) != str.at(n-i-1))
            return false;
    return true;
}
int maxLengthNonPalinSubstring(string str)
{
    int n = str.size();
    char ch = str.at(0);
    int i = 1;
    for (i=1; i<n; i++)
        if (str.at(i) != ch)
            break;
    if (i == n)
        return 0;
    if (isPalindrome(str))
        return n-1;
    return n;
}
void Solve(){
    string s;
    cin >> s;
    cout << maxLengthNonPalinSubstring(s) << endl;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
 
    int t = 1;
    //cin >> t;
    while(t--){
        Solve();
    }
 
    return 0;
}