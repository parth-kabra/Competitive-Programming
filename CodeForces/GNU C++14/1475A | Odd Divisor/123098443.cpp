#include<bits/stdc++.h>
using namespace std;
 
#define int long long int
#define endl "\n"
#define all(a) a.begin(),a.end()
 
const int imax=INT_MAX;
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
int sumDigits(int no)
{
    return no == 0 ? 0 : no % 10 + sumDigits(no / 10);
}
 
void kabraji_ka_totka(){
    // totka hai dosto !
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n & (n-1)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
 
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