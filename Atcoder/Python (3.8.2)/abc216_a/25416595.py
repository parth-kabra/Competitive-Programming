#include<bits/stdc++.h>
using namespace std;
#define int long long
const int imax=(1LL<<31)-1;
const int imin=INT_MIN;
const int mod=1e9+7;
const int N=2e5+10;
#define LOG2(X) ((unsigned) (8*sizeof (unsigned long long) - __builtin_clzll((X)) - 1))
void nPermute(string str,int n)
{
    sort(str.begin(), str.end());
    int i = 1;
    do {
        if (i == n)
            break;
  
        i++;
    } while (next_permutation(str.begin(), str.end()));
    cout << str;
}
void kabraji_ka_totka(){
    string s;
    int n;
  	cin>>s>>n;
    nPermute(s,n);
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        kabraji_ka_totka();
    return 0;
}