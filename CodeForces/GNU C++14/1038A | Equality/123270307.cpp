#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define all(a) a.begin(),a.end()
const int imax=(1LL<<31)-1;
const int imin=INT_MIN;
const int mod=1e9+7;
template <typename T>
pair<T, bool> setEle(set<T>& searchSet,int index){
    pair<T, bool> result;
    if (searchSet.size() > index) {
        result.first= *(std::next(searchSet.begin(),index));
        result.second = true;
    }
    else
        result.second = false;
    return result;
}
int setBits(int n){
    int res=0;
    for(int i=0;i<n;i++){
        if((n & (1<<i)) != 0){
            res++;
        }
    }
    return res;
}
char tolower(char x){
    return char(x | ' ');
}
char toupper(char x){
    return char(x & '_');
}
void bin(int n){
    for(int i=10;i>=10;i--){
        cout<<((n>>i)&1);
    }
    cout<<endl;
}
void kabraji_ka_totka(){
    // totka hai dosto !
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int freq[26];
    memset(freq,0,sizeof(freq));
    for(char &i : s){
        freq[i-'A']++;
    }
    int res=freq[0];
    for(int i=0;i<k;i++){
        res=min(res,freq[i]);
    }
    res*=k;
    cout<<res<<endl;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        kabraji_ka_totka();
    return 0;
}